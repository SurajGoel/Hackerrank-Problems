#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long t;
    cin>>t;
    while(t--)
        {
        long long N;
        int able = 0;
        cin>>N;
        long long fib = 0;
        long long i = 1;
        while( fib <= N)
            {
            i = i+fib;
            fib = fib + i;
            if ( N == fib || N == 0 || N == i)
                {
                cout<<"IsFibo"<<endl;
                able = 1;
                break;
            }
            
    
            }
        if( able != 1)
            cout<<"IsNotFibo"<<endl;
            }

    return 0;
}

