#include <bits/stdc++.h>
using namespace std;

long long GCD(long long M, long long N)
{
    if(N==0)
        return M;
    return GCD(N, M%N);
}

int main()
{
    long long M, N;
    while(cin>>M>>N)
    {
        cout<<M*N/(GCD(M, N))<<endl;
    }
    return 0;
}
/*
3 33
33 3
18 79
8 12
11 33
*/

