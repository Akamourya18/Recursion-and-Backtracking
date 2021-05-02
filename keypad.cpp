#include<bits/stdc++.h>
using namespace std;
string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void key(int n,string ans)
{
    if(n==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<arr[n%10].size();i++)
    {
        key(n/10,arr[n%10][i]+ans);
    }
}
void keypad(int n,string ans,vector<string> output)
{
    if(n==0)
    {
        output.push_back(ans);
        return;
    }
    for(int i=0;i<arr[n%10].size();i++)
    {
        keypad(n/10,arr[n%10][i]+ans,output);
    }
}
int main()
{
    int n;
    cin>>n;

    //For store and return
    vector<string> output;
    keypad(n,"",output); 
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<endl;
    }

    cout<<"Using only print function\n";
    //For only print
    key(n,"");
}