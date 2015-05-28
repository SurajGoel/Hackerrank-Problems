#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void sortarray(long long data[] , int n)
{
int step,i;
    for(step=0;step<n-1;++step)
           for(i=0;i<n-step-1;++i)
           {
              if(data[i]>data[i+1])   
             {
            int temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }}
int main()
 {
    int t;
    cin>>t;
    while(t--)
        {
        int N,c=0;
        cin>>N;
        long long K;
        cin>>K;
        long long A[N],B[N];
        for(int i = 0 ; i<N ; i++)
            cin>>A[i];
        for(int i = 0 ; i<N ; i++)
            cin>>B[i];
        sortarray(A,N);
        sortarray(B,N);
        for(int i=0 ; i<N ; i++)
            {
            if((A[i]+B[N-i-1])>=K)
                c=1;
            else{
                c=0;
                break;
        }
      
    }
     if(c==1)
           cout<<"YES"<<endl;
           else cout<<"NO"<<endl;   
}
 return 0;
}

