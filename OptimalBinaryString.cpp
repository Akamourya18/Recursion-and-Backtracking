//Count number of binary string of length n possible, such that it has no consecutive 1s

// Array a[i] will contain number of strings of size i ending with 0
// b[i] will contain number of strings of size i ending with 1
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int a[n+1],b[n+1];
    a[0]=b[0]=0;
    a[1]=b[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    return a[n]+b[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}