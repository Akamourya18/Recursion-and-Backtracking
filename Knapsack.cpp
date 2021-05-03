#include<bits/stdc++.h>
using namespace std;
int max_profit(int w[],int p[],int n,int c)
{
    if(n==0 || c<=0)
    return 0;
    
    int inc=INT_MIN;
    int exl=INT_MIN;
    if(c-w[n-1]>=0)
    {
        inc=p[n-1]+max_profit(w,p,n-1,c-(w[n-1]));
    }
    
        exl=max_profit(w,p,n-1,c);
    return max(inc,exl);
}
int main()
{
    int weights[]={2,2,3,4};
    int prices[]={40,20,30,100};
    int n=4;
    int c=1;
    cout<<max_profit(weights,prices,n,c);
}