#include<bits/stdc++.h>
using namespace std;
void subsqn(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    string t=s.substr(1);
    subsqn(t,ans);
    subsqn(t,ans+s[0]);
    subsqn(t,ans+to_string(s[0]-'A'+65));
}
int main()
{
    string s;
    cin>>s;
    subsqn(s,"");
}