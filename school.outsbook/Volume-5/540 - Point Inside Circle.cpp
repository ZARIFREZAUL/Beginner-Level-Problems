#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int A, B, C, D, E;
    cin>>T;
    for(int i =1; i<=T; i++)
    {
        cin>>A>>B>>C>>D>>E;
        if(pow(abs(A-D), 2)+pow(abs(B-E), 2)<=C*C)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

/*
3
1 2 3 2 1
4 4 5 8 8
100 89 10000 10 20
*/

