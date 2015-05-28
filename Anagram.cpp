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
        string s;
        int ans=0;
        cin>>s;       
        if(s.length()%2!=0)
            cout<<"-1"<<endl;
        else
            {
           int str1[26]={0},str2[26]={0};
            for(int i=0 ; i<s.length()/2; i++)
                {
                 int temp1 = s[i],temp2 = s[i+s.length()/2];
                str1[temp1-97]++;
                str2[temp2-97]++;
                }
           for(int i=0 ; i<26 ; i++)
               ans = ans+ abs(str1[i]-str2[i]);
            cout<<ans/2<<endl;
        }
    }
    return 0;
}
