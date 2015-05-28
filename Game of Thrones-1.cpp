#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
    int count1=0;
    sort(s.begin(),s.end());
          for(long i=0 ; i<s.length() ; i++)
              {
              if((s[i]!=s[i-1])||(i==0))
                  {
                int count=0;
              for(long j=0 ; j<s.length() ; j++)
                  {
                  if(s[j] == s[i])
                      count++;
              }
              if(count%2!=0)
                  count1++;
                  if(count1>2)
                      {
                      cout<<"NO";
                      return 0;
                  }
          }
              }
        cout<<"YES";
    return 0;
}

