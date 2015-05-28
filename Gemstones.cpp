#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    string s[n];
    int array[26] = {0};
    for(int i=0 ; i<n ; i++)
        {
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
        for(int j=0 ; j<s[i].length() ; j++)
            {
            if((s[i][j]!=s[i][j-1])||(j==0))
                {
                int temp = s[i][j];
                array[temp-97]++;
            } 
        }
    }
    for(int i=0 ; i<26 ; i++)
        if(array[i]==n)
            ans++;
    cout<<ans;   
    return 0;
}
