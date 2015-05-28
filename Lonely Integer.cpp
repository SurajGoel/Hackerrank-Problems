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

int main() {
 int N;
    cin>>N;
    int c=0;
    int array[N];
    for( int i=0 ; i<N ; i++)
        cin>>array[i];
    for(int i=0 ; i<N ; i++)
        {
        for(int j=0 ; j<N ; j++)
            {
            if((array[i]==array[j])&&(i!=j))
                {
                c=1;
                break;
            }
            else c=0;
        }
        if(c==0)
            {
            cout<<array[i];
            break;
        }
    }
    
    
    return 0;
}

