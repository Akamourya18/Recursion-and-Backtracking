//Given N, friends who want to go to a party on bikes. Each 
//guy can go as single, or as a couple. Find the number of ways
//in which N friends can go to the party

#include<bits/stdc++.h>
using namespace std;
int pairs(int n)
{
    if(n==0 || n==1)
    return 1;

    return pairs(n-1) + (n-1)*pairs(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<pairs(n);
}