#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin>>s;
    int row,col,lth=s.length();
    row=sqrt(lth);
    if(row*row==lth)
        col=row;
    else col=row+1;
    for(int i=0 ; i<col ; i++)
        {
        int temp=i;
        while(temp<lth)
            {
            cout<<s[temp];
            temp+=col;
        }
        cout<<" ";
    }
    return 0;
}
