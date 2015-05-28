#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void PrintOut( long numb , long first , long second)
{
	long i,j;
    int ans[numb];
	//ans = first*(numb-1) + second*0;
	//cout<<ans<<" ";
	for(  i = 0, j = numb ; i <= numb-1, j>0 ; i++,j--)
		ans[i]=first*(j-1) + second*(i);
    std::sort(ans,ans+numb);
    int m=0;
    while(m<numb)
        {
        if((ans[m]!=ans[m-1])||(m==0))
            cout<<ans[m]<<" ";
        m++;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
        {
        long a,b,n;
        cin>>n>>a>>b;
        PrintOut( n , a , b);
        cout<<endl;
    }
    return 0;
}

