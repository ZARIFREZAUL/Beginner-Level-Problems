#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    while(cin>>N)
    {
        long long P = 0, Q = 1, result = 0;
        int coun = 1;

        while (coun <= N)
        {
            result = P + Q;
            P = Q;
            Q = result;
            coun++;
        }
        cout<<result<<endl;
    }
}

/*
1
3
4
2
90
*/
