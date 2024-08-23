#include <bits/stdc++.h>
using namespace std;

int main()
{
    int coun=1;
    long long M, N, O;
    while(cin>>M>>N>>O)
    {
        cout<<"Case "<<coun++<<": "<<endl;
        for(int i=N; i<=O; i++)
        {
            cout<<M<<" X "<<i<<" = "<<M*i<<endl;
        }
    }
}
/*
1 3 5
10 15 18
*/



