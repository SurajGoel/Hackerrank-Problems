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
        long n,temp,count=0;
        cin>>n;
        temp = n;
        while(temp!=0)
            {
            if(temp%10 != 0)
                {
            if((n%(temp%10) == 0))
                count++;
            }
            temp = temp/10;
        }
        cout<<count<<endl;
    }
    return 0;
}

