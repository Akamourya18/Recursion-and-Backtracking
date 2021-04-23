#include<bits/stdc++.h>
using namespace std;
int all(int a[],int n,int x,int output[])
{
    if(n==0)
        return 0;
    int k=all(a+1,n-1,x,output); 
    if(a[0]==x)
    {
        for(int i=k-1;i>=0;i--)
        {
            output[i+1]=output[i]+1;
        }
        output[0]=0;
        k++;
    }
    else
    {
        for(int i=k-1;i>=0;i--)
        {
            output[i]=output[i]+1;
        }
        
    }
    return k;
}
int main()
{
    int n,i,k,x;
    cin>>n;
    int a[n],output[n]={0};
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    k=all(a,n,x,output);
    for(i=0;i<k;i++)
    {
        cout<<output[i]<<" ";
    }
}