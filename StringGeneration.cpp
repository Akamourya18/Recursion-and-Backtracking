#include<bits/stdc++.h>
using namespace std;
string arr[]={"","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
void print(int a[],int i,int n,string ans)
{
    if(n==0)
    {
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        return;
    }
    
    print(a,i+1,n-1,arr[a[i]]+ans);
    int temp=(a[i]*10)+a[i+1];
    if(temp<=26)
    print(a,i+2,n-2,arr[temp]+ans);
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    print(a,0,n,"");
}