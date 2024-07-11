#include <bits/stdc++.h>
using namespace std;

bool prime(long long N)
{
    if(N==2) return true;
    else if(N%2==0||N<=1) return false;
    else
    {
        for(long long i=3; i*i<=N; i+=2)
        {
            if(N%i==0)
            {
                return false;
                break;
            }
        }
        return true;
    }

}

int main()
{
    long long N;
    while(cin>>N)
    {
        if(prime(N))
            cout<<"prime number"<<endl;
        else
            cout<<"composite number"<<endl;
    }
    return 0;
}

/*
13
18
5
1
13
-1
222
10000000000
9999999999
9999999998
9999999997
2
3
5
*/
