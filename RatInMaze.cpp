#include<bits/stdc++.h>
using namespace std;
int xMove[4] = { -1,1,0,0 };
int yMove[4] = { 0,0,1,-1 };
bool canPlace(char maze[8][8],int i, int j, int n)
{
    if(i<0 || j<0 || i>=n || j>=n || maze[i][j]=='1' || maze[i][j]=='X')
        return false;
    return true;
}
bool solve(char maze[8][8], int i, int j, int n, int m)
{
    if(i==n-1 && j==m-1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<maze[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
       return true;
    }

    for(int x=0;x<4;x++)
    {
        if(canPlace(maze,i+xMove[x],j+yMove[x],n))
        {
            maze[i+xMove[x]][j+yMove[x]]='1';
            solve(maze,i+xMove[x],j+yMove[x],n,m);
                
              maze[i+xMove[x]][j+yMove[x]]='0';  
        }
    }
    return false;
}
int main()
{
    char maze[8][8]={
        "10X",
        "000",
        "000"
    };
    int m=3,n=3;
    bool ans=solve(maze,0,0,m,n);
    if(!ans)
    {
        cout<<"Path does not exist";
    }
}