#include<bits/stdc++.h>
using namespace std;
#define N 8
int isSafe(int x,int y,int sol[][N])
{
    return (x >= 0 && x < N && y >= 0 && y < N
            && sol[x][y] == -1);
}
void printsol(int sol[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        cout<<" "<<setw(2)<<sol[i][j]<<" ";
        cout<<endl;
    }
}
int solveKTutil(int x,int y,int movei,int sol[N][N],int xMove[],int yMove[])
{
    int k,next_x,next_y;
    if(movei==N*N)
     return 1;

    for(k=0;k<8;k++)
    {
        next_x=x+xMove[k];
        next_y=y+yMove[k];
        if(isSafe(next_x,next_y,sol))
        {
            sol[next_x][next_y]=movei;
            if(solveKTutil(next_x,next_y,movei+1,sol,xMove,yMove)==1)
            return 1;
            else
            sol[next_x][next_y]=-1;
        }
    }
    return 0;
}
int solveKT()
{
    int sol[N][N],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        sol[i][j]=-1;
    }
    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    sol[0][0]=0;

    if(solveKTutil(0,0,1,sol,xMove,yMove)==0){
        cout<<"Solution does not exist";
        return 0;
    }
    else
    printsol(sol);
    return 1;
}
int main()
{
    solveKT();
    return 0;
}