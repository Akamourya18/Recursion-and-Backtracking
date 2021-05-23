#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
   int pivot = arr[low]; 
    int i=high+1;
    for (int j = high; j > low ; j--)
    {
        if (arr[j] > pivot)
        {
            i--;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i-1], arr[low]);
    return (i-1);
}
void quicksort(int a[],int l,int r)
{
    if(r<=l)
    return;
    int n=partition(a,l,r);
    quicksort(a,l,n-1);
    quicksort(a,n+1,r);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1);   
    for(int i=0;i<n;i++)
    cout<<a[i];
}