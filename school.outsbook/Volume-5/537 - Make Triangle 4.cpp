#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        for(int i=1; i<=N; i++)
        {
            for(int j=i; j<N; j++)
            {
                cout<<" ";
            }
            for(int j=1; j<=i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}

/*
3
5
*/


