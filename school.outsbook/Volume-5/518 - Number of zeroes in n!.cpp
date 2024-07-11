#include <bits/stdc++.h>
using namespace std;

long long fzero(long long n) {
    long long count = 0;
    for (long long power_of_5 = 5; n / power_of_5 > 0; power_of_5 *= 5) {
        count += n / power_of_5;
    }
    return count;
}

int main()
{
    long long N;
    while(cin>>N)
            cout<<fzero(N)<<endl;
    return 0;
}

/*
3
7
14
100
2
5
7
10
1
9999999999999999
*/






