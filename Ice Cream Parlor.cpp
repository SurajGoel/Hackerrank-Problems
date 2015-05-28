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
        int i,j,flag=0,m,n;
        cin>>m>>n;
        int array[n];
        for(i=0 ; i<n ; i++)
            cin>>array[i];
        for(i=0 ; i<n ; i++)
            {
            for(j=i+1 ; j<n ; j++)
                {
                if((array[i]+array[j])==m)
                    {
                    flag=1;
                    break;
                }
                    
            }
            
            if(flag==1)
                break;
                
        }
        cout<<i+1<<" "<<j+1<<endl;
    }
    return 0;
    
}

