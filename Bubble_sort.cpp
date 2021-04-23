#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int i, int n)
{
    if(i==n-1)
    return;
    bubbleSort(a,i+1,n);
    for(int j=i;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    bubbleSort(a,0,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<"";
}