#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long N;
    cin>>T;
    for(int i = 1; i<=T; i++)
    {
        cin>>N;
        if(N==0||N==1)
            cout<<"ODD"<<endl;
        else
            cout<<"EVEN"<<endl;
    }
}

/*
4
12 5
45 99
5 5
5 0
*/




