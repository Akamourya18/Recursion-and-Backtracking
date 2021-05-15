#include<bits/stdc++.h>
using namespace std;
string moveToEnd(string s,char x)
{
    if(s.size()==0)
        return "";
    string ans=moveToEnd(s.substr(1),x);
    if(s[0]==x)
        return ans+s[0];
    else
        return s[0]+ans; 
}
int main()
{
    string s;
    char x;
    cin>>s>>x;
    cout<<moveToEnd(s,x);
}