#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,ans=0,index=0,tindex,temp;
    cin>>n;
    int array[n];
    for(int i=0 ; i<n ; i++)
        cin>>array[i];
    sort(array,array+n); 
    while(index<n)
        {
        temp=array[index];
        tindex=index;
         ans=n-index;
        for(int i=tindex ; i<n ; i++)
            {
            array[i]=array[i]-temp;
            if(array[i]==0)
                index++;
        }
        cout<<ans<<endl;  
    }
    return 0;
}
