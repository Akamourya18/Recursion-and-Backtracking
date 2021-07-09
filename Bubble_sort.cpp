#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n)
{
    if(n==1)
    return;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
            swap(a[i],a[i+1]);    
    }
    bubbleSort(a,n-1);
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    bubbleSort(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<"";
}