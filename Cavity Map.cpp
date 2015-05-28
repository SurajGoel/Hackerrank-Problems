#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    char array[n][n];
    for(int i=0 ; i<n ; i++)
        {
        for(int j=0 ; j<n ; j++)
            cin>>array[i][j];
    }
    for(int i=1 ; i<n-1 ; i++)
        {
        for(int j=1 ; j<n-1 ; j++)
            {
            if((array[i-1][j]<array[i][j])&&(array[i+1][j]<array[i][j])&&(array[i][j-1]<array[i][j])&&(array[i][j+1]<array[i][j]))
                array[i][j]='X';
        }
    }
     for(int i=0 ; i<n ; i++)
        {
        for(int j=0 ; j<n ; j++)
            cout<<array[i][j];
            cout<<endl;
    }
    return 0;
}
