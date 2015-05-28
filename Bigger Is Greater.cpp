#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int SolveP( char a[] , int b , int c)
    {
    if(a[b]<a[b+1])
        {
        for(int k = c-1 ; k>=0 ; k--)
            {
            if(a[k]>a[b])
                {
                char temp = a[k];
                a[k]=a[b];
                a[b]=temp;
                sort(a+b+1,a+c);
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int flag;
        string s;
        cin>>s;
        int l=s.length();
        if(l==1)
            cout<<"no answer"<<endl;
        else{
        char array[l];
        for(int i=0 ; i<l ; i++)
            array[i]=s[i];
        for(int i=l-2 ; i>=0 ; i--)
            {
            flag = SolveP( array , i ,l);
            if(flag==1)
                break;
        }
        if(flag==1)
            {
        for(int i=0 ; i<l ; i++)
            cout<<array[i];
            cout<<endl;
        }
        else cout<<"no answer"<<endl;
    }
    }
    return 0;
}
