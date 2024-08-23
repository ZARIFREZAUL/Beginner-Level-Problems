#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    while(cin>>N)
    {
        long long P = 0, Q = 1, result = -1;
        while (result < N)
        {
            result = P + Q;
            if(result>=N) cout<<P<<" "<<Q<<endl;
            P = Q;
            Q = result;
        }
    }
}

/*
41
13
100
0
1
5
4
*/
