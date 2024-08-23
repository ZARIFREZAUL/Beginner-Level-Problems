#include <bits/stdc++.h>
using namespace std;

long long GCD(long long X, long long Y)
{
    if(Y==0)
        return X;
    else
        return GCD(Y, X%Y);
}

int main()
{
    int T;
    long long X, Y, result;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>X>>Y;
        result = (X/GCD(X, Y))*Y;
        if(X==Y)
            cout<<"Case "<<i<<": \"Yahoo, always we have great time in every "
                <<result<<" minute\""<<endl;
        else
            cout<<"Case "<<i<<": \"Yes, we have a good time after every "
                <<result<<" minutes\""<<endl;
    }
}
/*
10
1 7
3 11
1 1
10 5
16 4
64 18
5 5
*/

