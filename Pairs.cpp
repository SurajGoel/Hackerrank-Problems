#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    long n,k,count=0;
    cin>>n>>k;
    long long array[n];
    for(long i=0 ; i<n ; i++)
        cin>>array[i];
    sort(array,array+n);
    for(long i=0 ; i<n ; i++)
        for(long j=i ; j<n ; j++)
        {
        if(array[j]-array[i]>k)
            break;
        else if(array[j]-array[i]==k)
            {
            count++;
            break;
        }            
    }
    cout<<count;
    return 0;
}

