#include<bits/stdc++.h>
using namespace std;
string arr[]={ "zero","one","two","three","four","five","six","seven","eight","nine","ten" };
void NumToString(int n)
{
    if(n==0)
    return ;
    NumToString(n/10);

    cout<<arr[n%10]<<" ";
    return;
}
int main()
{
    int n;
    cin>>n;
    NumToString(n);
}