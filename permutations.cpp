#include<bits/stdc++.h>
using namespace std;
set<string> st;
//to permute the same array without taking extra string
void permute(string s,int i)
{
    if(i==s.size())
    {
        cout<<s<<endl;
        return;
    }

    for(int j=i;j<s.size();j++)
    {
        swap(s[i],s[j]);
        permute(s,i+1);
        //Backtracking - To restore the original array
        swap(s[i],s[j]);
    }
}

//Print answer using another string
void perm(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        swap(s[0],s[i]);
        perm(s.substr(1),s[0]+ans);
    }
    
}

//print only unique permutations and in lexicographical order... Example input=abb
void unique_per(string s,int i)
{
    if(i==s.size())
    {
        //cout<<s<<endl;
        st.insert(s);
        return;
    }

    for(int j=i;j<s.size();j++)
    {
        swap(s[i],s[j]);
        unique_per(s,i+1);
        //Backtracking - To restore the original array
        swap(s[i],s[j]);
    }
}
int main()
{
    string s;
    cin>>s;
    perm(s,"");
    cout<<endl;
    permute(s,0);
    cout<<endl;
    
     unique_per(s,0);
     for(auto str:st)
     {
         cout<<str<<endl;
     }
}
