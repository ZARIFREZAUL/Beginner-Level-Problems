#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    while(cin>>N)
    {
        if(N==0)
            break;

        if (N == 1)
        {
            cout << "The position of Fibonacci number (" << N << ") is 2." << endl;
            continue;
        }

        long long P = 1, Q = 1, result = 0;
        int coun = 2; // Start from position 2 as we handle special case of 1 separately

        while (result < N)
        {
            result = P + Q;
            P = Q;
            Q = result;
            coun++;
        }
        cout<<"The position of Fibonacci number ("<<N<<") is "<<coun<<"."<<endl;

    }
}

/*
1
2
102334155
24157817
17711
12586269025
3
987
610
0
*/
