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
        string s;int c=0,a=0;
        cin>>s;
        for(int i=1;s[i]!='\0';i++)
            {
            if((s[i]==65 && s[a]==66)||(s[i]==66 &&s[a]==65))
            {
                a=i;
               // cout<<a<<endl;
               }
                else{
                    c++;
                    //cout<<c<<" "<<i<<endl;
                   
                }
                
            }
        cout<<c<<endl;
        
    }
    return 0;
}

