#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int CheckP( char str[] , int a)
    {
    for(int i=0 ; i<a ; i++)
        {
        if(str[i]!=str[a-i-1])
            return 0;
    }
    return 1;
}
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int i,temp=0;
        string s;
        cin>>s;
        int l = s.length();
        char array[l-1];       
        for(i=0 ; i<l/2 ; i++)
            {
            if(s[i]!=s[l-i-1])
                {
                temp=1;
                break;
        }
        }
        for(int k=0,j=0 ; k<l,j<l-1 ; k++,j++)
            {
            if(k==i)
            {
			    j--;
            }
            else array[j]=s[k];
        }
        if(temp==1)
            {
            if(CheckP(array,l-1))
              cout<<i<<endl;
            else cout<<l-i-1<<endl;
    }
        
        else cout<<"-1"<<endl;
        }
    return 0;
}
