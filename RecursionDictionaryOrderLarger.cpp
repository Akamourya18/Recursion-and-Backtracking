#include <bits/stdc++.h>
using namespace std;

string str;

void permute(string inp, string out)
{
    //Base case
    if (inp.size() == 0)
    {
        
        if (out > str)
        {
            cout << out << endl;
        }
        return;
    }

    //Recursive case
    for (int i = 0; i < inp.size(); i++)
    {
        swap(inp[0],inp[i]);
        permute(inp.substr(1), inp[0]+out);
    }
}
int main()
{
    cin >> str;
    
    string temp = str;

    permute(temp, "");

    return 0;
}