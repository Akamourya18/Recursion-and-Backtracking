#include<bits/stdc++.h>
using namespace std;
bool canPlace(int a[10][10],int i,int j,int n)
{
    //Column
    for(int x=0;x<i;x++)
    {
        if(a[x][j]==1)
        return false;
    }

    //Left diagonal
    int x=i,y=j;
    while(x>=0 && y>=0)
    {
        if(a[x][y]==1)
        return false;
        x--;
        y--;
    }

    //Right diagonal
    x=i,y=j;
    while(x>=0 && y<n)
    {
        if(a[x][y]==1)
        return false;
        x--;
        y++;
    }
    return true;
}
bool solve(int a[10][10],int i,int n)
{
    //Base case
    if(i==n)
    {
        //Print the board
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<n;y++)
            cout<<a[x][y]<<" ";
            cout<<endl;
        }
        return true;
    }

    //Rec case
    //Try to place the queen at every column in the current row
    for(int j=0;j<n;j++)
    {
        if(canPlace(a,i,j,n))
        {
            a[i][j]=1;
            bool aageQueenRakhPaayeKya = solve(a,i+1,n);
            if(aageQueenRakhPaayeKya)
            {
                return true;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    return false;
}
int main()
{
    int i,j,n;
    cin>>n;
    int a[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    cout<<endl;
    bool ans=solve(a,0,n);
    if(!ans)
    cout<<"No possible combination exist";
}