#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int N)
{
    if(N==0)
        return 0;
    else if(N==1)
        return 1;
    else
        return fibonacci(N-1) + fibonacci(N-2);
}


int main()
{
    vector<long long> vec;
    vec.push_back(1);
    for(int i=2; i<=50; i++)
    {
        cout<<fibonacci(i)<<endl;
        vec.push_back(fibonacci(i));
    }

    /*
    long long N;
    while(cin>>N)
    {
        if(N==0)
            break;

        cout<<"The position of Fibonacci number ("<<N<<") is "<<coun<<"."<<endl;
    }
    */
}

/*
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
