#include<bits/stdc++.h>
using namespace std;
void sort(int a[], int n)
{
    int i;
    if(n==1)
        return;
    sort(a,n-1);
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[n-1])
            break;
    }
    if(i==n-1)
    return;
    int temp=a[n-1];
    for(int j=n-1;j>i;j--)
    {
        a[j]=a[j-1];
    }
    a[i]=temp;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
