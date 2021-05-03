#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int le[n1],i,j,k;
    int ri[n2];
    for(i=0;i<=mid;i++)
    {
        le[i]=a[l+i];
    }
    j=0;
    for( ; i<=r ; i++)
    {
        ri[j]=a[mid+1+j];
        j++;
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(le[i]<=ri[j])
        {
            a[k]=le[i];
            i++;
            k++;
        }
        else
        {
            a[k]=ri[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        a[k]=le[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=ri[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int l,int r)
{
    if(l>=r)
    return;
    int mid=l+(r-l)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,mid,r);
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    cout<<a[i];
}