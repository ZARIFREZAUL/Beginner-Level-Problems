#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        if(N==0)
            cout<<"0 ";
        else
            for(int i = N; i>=1; i--)
                cout<<i<<" ";
        cout<<endl;
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


