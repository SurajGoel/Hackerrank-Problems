#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    long long t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
       long long answer = n/c;// Chocolates he can buy at first place and no. of wrappers too
       long long temp=answer;
        while(temp>=m)
            {
            answer=answer+1;
            temp=temp-m+1;
        }
        
        
        cout<<answer<<endl;
    }
    return 0;
}

