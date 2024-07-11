#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        long long result = 1;
        if(N==0)
            cout<<result<<endl;
        else
        {
            for(int i=2; i<=N; i++)
            {
                result*=i;
            }
            cout<<result<<endl;
        }
    }
    return 0;
}
/*
3
5
9
0
1
6
20
*/
