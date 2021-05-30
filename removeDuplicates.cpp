#include<bits/stdc++.h>
using namespace std;
string removeDup(string s)
{
    if(s.size()==0)
    return "";
    string ans=removeDup(s.substr(1));
    if(s[0] == ans[0])
    {
        return ans;
    }
    else
        return s[0]+ans; 
}
int main()
{
    string s;
    cin>>s;
    cout<<removeDup(s);
}