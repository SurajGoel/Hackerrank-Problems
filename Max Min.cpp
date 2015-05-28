#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++)
        cin >> candies[i];
    sort(candies,candies+N);
    int ans=candies[K-1]-candies[0];
    for(int i=1 ; i<=N-K ; i++)
        {
        int temp=candies[i+K-1]-candies[i];
        if(temp<ans)
            ans=temp;
    }
    cout << ans << "\n";
    return 0;
}

