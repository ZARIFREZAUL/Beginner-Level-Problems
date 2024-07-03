#include <bits/stdc++.h>

using namespace std;

int main()
{
    int M, N;
    while(cin>>M>>N)
    {
        long long T = (M - N)*365, L = T%100;
        cout<<T<<endl<<L<<endl;
    }
    return 0;
}



