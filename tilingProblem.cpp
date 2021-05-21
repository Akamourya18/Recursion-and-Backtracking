//Given a floor of 4xn size, in how many ways, the floor can be covered with a tile
// of size 4x1 or 1x4 
//It can also be nxm size floor and 1xm/mx1/1xn/nx1 sized tile.
#include<bits/stdc++.h>
using namespace std;
int PossibleWays(int n)
{
    if(n<=3)
    {
        return 1;
    }
    if(n==4)
     return 2;
    return PossibleWays(n-1)+PossibleWays(n-4);
}
int main()
{
    int n;
    cin>>n;
    cout<<PossibleWays(n);
}