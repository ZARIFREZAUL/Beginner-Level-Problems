#include <bits/stdc++.h>
using namespace std;

string upperCase(string N)
{
    string result;
    for(int i=0; i<N.size(); i++)
    {
        result += toupper(N[i]);
    }
    return result;
}

int main()
{
    int T;
    while(cin>>T)
    {
        cin.ignore();
        string str;
        for(int i=1; i<=T; i++)
        {
            getline(cin, str);
            cout<<"Case "<<i<<": "<<upperCase(str)<<endl;
        }
    }
    return 0;
}

/*
3
AbC
aB cdE
EFGH
*/

