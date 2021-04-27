//Sort students according to their marks

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int marks;
    string name;
};
void bucket_sort(student s[],int n)
{
    vector<student> v[100];
    vector<student> :: iterator itr;
    for(int i=0;i<n;i++)
    {
        //cout<<(s[i].marks);
        v[s[i].marks].push_back(s[i]);
    }
    
    for(int i=99;i>=0;i--)
    {
        for(itr=v[i].begin();itr!=v[i].end();itr++)
        {
            cout<<(*itr).name<<" "<<(*itr).marks<<endl;
        }
    }
}
int main()
{
    student s[100];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>s[i].name>>s[i].marks;

    bucket_sort(s,n);
}