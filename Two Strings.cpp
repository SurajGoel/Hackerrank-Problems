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
        string s1,s2;
        int temp=0;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0 ; i<s1.length() ; i++)
            {
            int sec = s1[i];
            for(int j=0 ; j<=sec-97 ; j++)
            {
            if(s1[i]==s2[j])
                {
                temp=1;
                break;
            }
        }
            if(temp==1)
                break;
        }
        if(temp==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
    return 0;
}
