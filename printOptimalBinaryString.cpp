#include<bits/stdc++.h>
using namespace std;
void solve(int n, string ans, int i)
{
    if(ans.size()==n || n==0)
    {
        cout<<ans<<endl;
        return;
    }
    if(ans[i]=='1')
    {
        solve(n,ans+'0',i+1);
    }
    else if(ans[i]=='0')
    {
        solve(n,ans+'0',i+1);
        solve(n,ans+'1',i+1);
    }
}
int main()
{
    int n;
    cin>>n;
    solve(n,"1",0);
    solve(n,"0",0);
}