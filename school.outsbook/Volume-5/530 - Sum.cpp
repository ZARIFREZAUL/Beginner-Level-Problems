#include <bits/stdc++.h>
using namespace std;

int sum(int N)
{
    if(N==0) return 1;
    return (N*(N+1))/2;
}

int main()
{
    int N;
    while(cin>>N)
    {
        int result = sum(abs(N));
        if(N<0) cout<<1-result<<endl;
        else cout<<result<<endl;
    }
    return 0;
}

/*
5
-3
8
0
9
-9
*/
