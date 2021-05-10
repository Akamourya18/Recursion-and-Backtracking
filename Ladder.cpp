//N ladders and person can take at max k steps
//number of ways to reach top of ladder 

#include<bits/stdc++.h>
using namespace std;
int ladder(int n,int k)
{
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    
    int ans=0;
    for(int i=1;i<=k;i++)
    {
        ans+=ladder(n-i,k);
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<ladder(n,k);
}