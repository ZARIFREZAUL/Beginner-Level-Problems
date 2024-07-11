#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, T;
    while(cin>>N)
    {
        if(N==0) break;
        int min=99;
        for(int i = 1; i<=N; i++)
        {
            cin>>T;
            if(T<min)
                min=T;
        }
        cout<<min<<endl;
    }
    return 0;
}
/*
5

5 6 7 8 9

6

20 21 22 23 24 25

0
*/



