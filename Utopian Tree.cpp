#include <iostream>
using namespace std;

int height(int n) {
    int Ans=1;
    if( n == 0)
        Ans = 1;
    else
        {
    for(int i = 1 ; i<=n ; i++)
        {     
        if( i%2 != 0)
            Ans = Ans*2;
        else Ans = Ans+1;
            
    }
    }
    return Ans;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}

