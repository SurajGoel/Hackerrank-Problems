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
        int n;
        cin>>n;
        char array[n][n];
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<n ; j++)
            cin>>array[i][j];
        for(int i=0 ; i<n ; i++)
            sort(array[i],array[i]+n);
        int temp = 0;
        for(int j=0 ; j<n ; j++)
            {
            for(int i=0 ; i<n-1 ; i++)
                {
                if(array[i][j]>array[i+1][j])
                    {
                    temp=1;
                    break;
                }
            }
            if(temp==1)
                break;
        }
        if(temp==1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
