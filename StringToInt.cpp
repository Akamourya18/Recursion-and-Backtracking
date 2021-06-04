#include<bits/stdc++.h>
using namespace std;
int StrToInt(string s)
{
    if(s.size()==0)
    return 0;
    
    string temp= s.substr(0,s.size()-1);
    int t=StrToInt(temp);
    return (t*10)+(s[s.size()-1]-'0');
}
int main()
{
    string s;
    cin>>s;
    cout<<StrToInt(s);
}