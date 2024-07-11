#include <bits/stdc++.h>
using namespace std;

int sum(string N)
{
    int result= 0;
    for(int i=0; i<N.size(); i++)
    {
        result += N[i]-'0';
    }
    return result;
}

int main()
{
    string N;
    while(cin>>N)
    {
        if(sum(N)%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

/*
16499205854376
10
123456789123456789123456789123456789
*/
