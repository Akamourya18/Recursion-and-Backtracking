#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==1)
    return 1;
    
    return sum(n-1)+n;
}
void asd_sequence(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }
    asd_sequence(n-1);
    cout<<n;
}
void dsd_sequence(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }
    cout<<n;
    dsd_sequence(n-1);
}
int fib(int n)
{
    if(n==0 || n==1)
    return n;

    return fib(n-1)+fib(n-2);
}
int fac(int n)
{
    if(n==1)
    return 1;
    return fac(n-1)*n;
}
int power(int n,int p)
{
    if(p==1)
    return n;
    if(p%2!=0)
    return power(n,p-1)*n;
    else
    return power(n*n,p/2);
}
int gcd(int a,int b)
{
    if(a==0)
    return b;

    return(gcd(b%a,a));
}int mul(int a,int b)
{
    if(b==1)
    return a;
    return a+mul(a,b-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    asd_sequence(n);
    cout<<endl;
    dsd_sequence(n);
    cout<<endl;
    cout<<fib(n)<<endl;
    cout<<fac(n)<<endl;
    cout<<power(n,3)<<" "<<power(n,4)<<endl;
    cout<<gcd(n,5)<<endl;
    cout<<mul(n,5)<<endl;
}