#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        string s1,s2;
        int ans=0;
        cin>>s1>>s2;       
        int str1[26]={0},str2[26]={0};
         for(int i=0 ; i<s1.length(); i++)
                {
                 int temp = s1[i];
                str1[temp-97]++;
                }
        for(int i=0 ; i<s2.length() ; i++)
            {
            int temp = s2[i];
            str2[temp-97]++;
        }
           for(int i=0 ; i<26 ; i++)
               ans = ans+ abs(str1[i]-str2[i]);
            cout<<ans;
    return 0;
}
