#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, Y;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>Y;
        int coun=0;
        for(int k=1; k*k*k<=Y; k++)
            ++coun;
        cout<<"Case "<<i<<": "<<coun<<endl;
    }
}
/*
10
1
20
27
10000000000
9999999999
63
26
999
271
35
*/
