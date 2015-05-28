#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int T;
    long N;
    cin>>N>>T;
    int width[N];
     for( long i = 0 ; i< N ; i++)
        cin>>width[i];
    while(T--)
        {
        int i,j;
        cin>>i>>j;
        int ans=width[i];
        for(long k=i ; k<=j ; k++)
            {
            if(width[k]<ans) ans=width[k];
            if(ans==1) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
