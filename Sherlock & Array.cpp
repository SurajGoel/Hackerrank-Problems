#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        int n,c=1,sum1=0,sum=0;
        cin>>n;
        int array[n];
        for(int i=0 ; i<n ; i++){
            cin>>array[i];
            sum1=sum1+array[i];
        }
        sum1=sum1-array[0];
        if(n==1)
        	cout<<"YES"<<endl;
        else if(n==2)
            cout<<"NO"<<endl;
        else{
        for(int i=1 ; i<n-1 ; i++)
            {
              sum=sum+array[i-1];
              sum1=sum1-array[i];
            if(sum==sum1){
                cout<<"YES"<<endl;
                c=0; break;
            }
        }
        if(c==1)
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
