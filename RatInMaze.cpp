#include<bits/stdc++.h>
using namespace std;
bool print_maze(char maze[10][10],int sol[][10],int m,int n,int i,int j)
{
    if(i==m && j==n)
    {
        sol[m][n]=1;
        //Print the path
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            cout<<sol[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    //Rat is outside the grid
    if(i>m || j>n || i<0 || j<0)
    {
        return false;
    }
    //Path is blocked
    if(maze[i][j]=='X' || sol[i][j]==1)
    {
        return false;
    }

    //Assuming solution exists through current cell
    sol[i][j]=1;

    //Check if rat can move in right block
    bool right_success=print_maze(maze,sol,m,n,i,j+1);
    //Check if rat can move in down block
    bool down_success=print_maze(maze,sol,m,n,i+1,j);
    //Check if rat can move in up block
    bool up_success=print_maze(maze,sol,m,n,i-1,j);
    //Check if rat can move in left block
    bool left_success=print_maze(maze,sol,m,n,i,j-1);

    
    //Backtracking
    sol[i][j]=0;

    if(right_success || down_success || up_success || left_success)
    return true;

    return false;
}
int main()
{
    char maze[10][10]={
        "00X",
        "000",
        "000"
    };
    int sol[10][10]={0};
    int m=3,n=3;
    bool ans=print_maze(maze,sol,m-1,n-1,0,0);
    if(!ans)
    {
        cout<<"Path does not exist";
    }
    
}