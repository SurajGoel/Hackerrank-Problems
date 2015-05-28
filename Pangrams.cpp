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
        int flag=0;
        cin>>s;
        for(int i=0 ; i<s.length()-1 ; i++)
            {
            if(abs( (int)s[i+1]- (int)s[i]) != abs( (int)s[s.length()-2-i]- (int)s[s.length()-1-i]))
                {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            cout<<"Not Funny"<<endl;
        else cout<<"Funny"<<endl;
    }
    return 0;
}
