#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        int result = 0, pre;
        for(int i = 1; i<=N; i++)
        {
            pre = 0;
            for(int j = 2; j<=i; j++)
            {
                pre+=j;
            }
            result = result + 8*pre + 4;
        }
        cout<<result<<endl;
    }
    return 0;
}
/*
3
5
0
1
23
*/


