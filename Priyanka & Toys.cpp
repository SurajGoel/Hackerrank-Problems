#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,ans=1;
    cin>>n;
    int weight[n];
    for(int i=0 ; i<n ; i++)
        cin>>weight[i];
    sort(weight,weight+n);
    int temp = weight[0];
    for(int i=1 ; i<n ; i++)
        if(!(weight[i]<=temp+4))
         {
            ans++;
            temp=weight[i];    
    }
    cout<<ans;
    return 0;
}
