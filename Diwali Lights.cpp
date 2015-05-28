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
        long n,temp=1;
        cin>>n;
        for(int i=1 ; i<=n ; i++)
            temp=(temp*2)%100000;
        cout<<temp-1<<endl;
    }
    return 0;
}
