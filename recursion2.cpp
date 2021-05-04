#include<bits/stdc++.h>
using namespace std;
int frstocc(int a[],int n,int k)
{
    if(n<=0)
    return -1;

    if(a[0]==k)
    return 0;
    
    int ans=frstocc(a+1,n-1,k);
    if(ans==-1)
    return -1;
    else return ans+1;
}
int lstocc(int a[],int n,int k)
{
    if(n<=0)
    return -1;
    
    int ans=lstocc(a+1,n-1,k);
    if(ans==-1)
    {
        if(a[0]==k)
        return 0;
        else
        return -1;
    }
    else
    {
        return ans+1;
    }

}
bool sorted(int a[],int n)
{
    if(n==1)
    return true;
    if(a[0]>a[1])
    return false;
    
    return sorted(a+1,n-1);
}
int main()
{
    int n,i,k;
    cout<<"Enter no of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the number whose first and last occurence is to be found: ";
    cin>>k;
    cout<<"First occurence: "<<frstocc(a,n,k)<<endl;
    cout<<"Last occurence: "<<lstocc(a,n,k)<<endl;
    cout<<"Sorted or not :"<<sorted(a,n);
}