#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100000];
    int cnt=0;
    while(i<=mid && j<=e)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k++]=a[j++];
            cnt+=mid-i+1;
        }
    }
    while(i<=mid)
    temp[k++]=a[i++];
    while(j<=e)
    temp[k++]=a[j++];

    for(i=s;i<=e;i++)
    a[i]=temp[i];

    return cnt;
}
int InversionCount(int a[],int s,int e)
{
    if(s>=e)
    return 0;
    int mid=(s+e)/2;
    int x=InversionCount(a,s,mid);
    int y=InversionCount(a,mid+1,e);
    int z=merge(a,s,e);
    
    return x+y+z;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<InversionCount(a,0,n-1);
}