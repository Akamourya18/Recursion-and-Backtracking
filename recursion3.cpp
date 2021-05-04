#include<bits/stdc++.h>
using namespace std;
string ans="";
string ans2="";
string reverse(string s)
{
    if(s.size()==0)
    return s;
    string t=s.substr(1);
    reverse(t);
    ans+=s[0];
    return ans;
}
string pi(string s)
{
    if(s.size()<2)
    return "";
    if(s[0]=='p' && s[1]=='i')
    {
        ans2+="3.14";
        string t=s.substr(2);
        pi(t);
    }
    else
    {
        ans2+=s[0];
        string t2=s.substr(1);
        pi(t2);
    }
    return ans2;
}
int main()
{
    string s;
    cin>>s;
    cout<<reverse(s)<<endl;
    cout<<pi(s);
}