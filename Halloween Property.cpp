#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void MaxPieces( long k)
    {
    long long Ans;
    if( k % 2 == 0)
        Ans = (k/2)*(k/2);
        else 
        Ans = (k/2)*((k+1)/2);
    cout<<Ans<<endl;
}
int main() {
    int T;
    cin>>T;
    while(T--)
        {
        long K;
        cin>>K;
        MaxPieces(K);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

