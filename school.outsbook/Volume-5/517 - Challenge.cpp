#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D, T, M;
    cin>>N;
    for(int i = 1; i<=N; i++)
    {
        cin>>D>>T>>M;
        if(T<=D*M&&T!=0)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
/*
4
30 100 5
10 100 5
1 20 2
1 0 2
*/





