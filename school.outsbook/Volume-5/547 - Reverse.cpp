#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    while(cin>>N)
    {
        for(int i=N.size()-1; i>=0; i--)
        {
            cout<<N[i];
        }
        cout<<endl;
    }
}

/*
1234
5689
12345
123
144
*/


