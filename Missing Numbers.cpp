#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m,temp=0;
    int counts[100]={0},countb[100]={0};
    cin>>n;
    int arrays[n];
    for(int i=0 ; i<n ; i++)
        cin>>arrays[i];
    cin>>m;
    int arrayb[m];
    for(int i=0 ; i<m ; i++)
        cin>>arrayb[i];
    sort(arrays,arrays+n);
    sort(arrayb,arrayb+m);
    for(int i=0 ; i<n ; i++)
        counts[arrays[i]-arrays[0]]++;
    for(int i=0 ; i<m ; i++)
        countb[arrayb[i]-arrayb[0]]++;
    for(int i=0 ; i<100 ; i++)
        {        
        if(counts[i]!=countb[i])
            cout<<arrayb[temp]<<" ";
        temp=temp+countb[i];
    }
    return 0;
}
