#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string M, N;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>M>>N;
        cout<<"Case "<<i<<": "<<(M[0]-'0'+M[1]-'0')*(N[0]-'0'+N[1]-'0')<<endl;
    }
}

/*
3
11 11
11 22
11 33
*/





