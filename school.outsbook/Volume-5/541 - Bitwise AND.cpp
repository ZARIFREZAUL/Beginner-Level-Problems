#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int A, B;
    cin>>T;
    for(int i =1; i<=T; i++)
    {
        cin>>A>>B;
        cout<<(A&B)<<endl;
    }
    return 0;
}

/*
2
5 4
5 3
*/

