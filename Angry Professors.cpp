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
        int n,k,ans=0;
        cin>>n>>k;
        int sec=n;
        while(n--)
            {
            int temp;
            cin>>temp;
            if(temp>0)
                ans++;
        }
        if(sec-ans>=k)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
            
    return 0;
}
