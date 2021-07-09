//Number of subsets of array whose sum is equal to x.
#include<bits/stdc++.h>
using namespace std;
int subSum(int a[], int n,int x)
{
    if(x==0)
        return 1;
    if(n==0)
        return 0;
    if(a[n-1]>x)
        return subSum(a,n-1,x);
    else
        return subSum(a,n-1,x)+subSum(a,n-1,x-a[n-1]);
}
int main()
{
    int n,i,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>x;
    cout<<subSum(a,n,x);
    
}