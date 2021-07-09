//Given a string str of length N, the task is to print all possible non-empty 
//subsequences of the given string such that the subsequences either contains 
//characters or ASCII value of the characters from the given string.

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