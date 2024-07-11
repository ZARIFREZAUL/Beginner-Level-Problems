#include <bits/stdc++.h>
#include <cctype>
using namespace std;

string lowerCase(string N)
{
    string result;
    for(int i=0; i<N.size(); i++)
    {
        result += tolower(N[i]);
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
            cout<<"Case "<<i<<": "<<lowerCase(str)<<endl;
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

