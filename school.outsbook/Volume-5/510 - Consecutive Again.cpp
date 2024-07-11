#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        if(N==0)
            cout<<"0"<<endl;
        else
            for(int i = 0; i<N; i++)
            {
                for(int j = i+1; j<=i+3; j++)
                    cout<<j<<" ";
                cout<<endl;
            }


    }
    return 0;
}
/*
3
5
0
1
23
*/


