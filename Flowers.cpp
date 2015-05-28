#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int r,k,ans,index,temp=0;
        cin>>r>>k;
        int rad=sqrt(r);
        if(rad*rad==r)
            {
            index = rad-1;
            ans=4;
        }
        else
            {
            index=rad;
            ans=0;
    }
        for(int i=index ; i>0 ; i--)
            {
             int j = sqrt(r-i*i);
             if(j*j==r-i*i)
                 temp++;
        }  
        if((ans+(4*temp)>k))
            cout<<"impossible"<<endl;
        else cout<<"possible"<<endl;
}
return 0;
}
