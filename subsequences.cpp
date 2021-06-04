#include<bits/stdc++.h>
using namespace std;
int sqn(string s,string output[])
{
    if(s.size()==0)
    {
        output[0]="";
        return 1;
    }
    string sub=s.substr(1);
    int n=sqn(sub,output);
    for(int i=0;i<n;i++)
    {
        output[i+n]=s[0]+output[i];
    }
    return 2*n;
}
void subsqn(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }

    subsqn(s.substr(1),ans);
    subsqn(s.substr(1),s[0]+ans);
}
int main()
{
    string s;
    cin>>s;

    //For store and return
    string output[1000];
    int size=sqn(s,output); 
    for(int i=0;i<size;i++)
    {
        cout<<output[i]<<endl;
    }

    
    cout<<"Using only print function\n";
    //For only print and return
    subsqn(s,"");
}