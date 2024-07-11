#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, D;
    cin>>T;
    for(int i =1; i<=T; i++)
    {
        cin>>N;
        int result = 0;
        for(int i =1; i<=N; i++)
        {
            cin>>D;
            result = result ^D;
        }
        cout<<result<<endl;
    }
    return 0;
}

/*
3

4

1 2 3 4

3

1 2 3

5

10 5 20 18 2
*/


