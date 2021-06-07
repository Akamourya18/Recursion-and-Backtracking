//Number of subsets of array whose sum is equal to x.
#include<bits/stdc++.h>
using namespace std;
int ans=0;
void subSum(int a[], int n, int i, int sum, int x)
{
    if(i==n)
    {
        if(sum==x)
        ans++;
        return;
    }
    
    subSum(a,n,i+1,sum,x);
    subSum(a,n,i+1,sum+a[i],x);
}
int main()
{
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>x;
    subSum(a,n,0,0,x);
    cout<<ans;
}