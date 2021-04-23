//Print all possible combinations of n opening and closing brakets

#include<bits/stdc++.h>
using namespace std;
void generate_brackets(char a[],int n, int idx,int open,int close)
{
    if(idx==2*n)
    {
        a[idx]='\0';
        cout<<a<<endl;
        return;
    }

    if(open<n)
    {
        a[idx]='(';
        generate_brackets(a,n,idx+1,open+1,close);
    }
    if(close<open)
    {
        a[idx]=')';
        generate_brackets(a,n,idx+1,open,close+1);
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    char a[2*n];
    generate_brackets(a,n,0,0,0);
}