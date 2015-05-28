#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int t;
    cin>>t;
    
    
    while(t--)
        {
        	string love;
    cin>>love;
        int j;
        int ans =0;
    for( int i = love.length() - 1,  j = 0 ; j<i ; j++,i--)
        {
        int a,b;
        if ( love[i] != love[j])
            {
             a = love[i];
             b = love[j];
             ans = ans + sqrt((a-b)*(a-b));
        }
            
    }
        cout<<ans<<endl;
    }
    
    return 0;
}

