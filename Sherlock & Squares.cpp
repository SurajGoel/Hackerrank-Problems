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
         int a,b,ans;
        cin>>a>>b;
        ans = (int)sqrt(b) - (int)sqrt(a);
        if((int)sqrt(a)*(int)sqrt(a)==a)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}

