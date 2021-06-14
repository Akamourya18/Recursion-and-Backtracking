#include<bits/stdc++.h>
using namespace std;
void wave_sort(int a[],int n)
{
    for(int i=1;i<n-1;i+=2)
    {
        if(a[i]<a[i-1])
        swap(a[i],a[i-1]);
        if(a[i]<a[i+1])
        swap(a[i],a[i+1]);
    }
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    wave_sort(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}