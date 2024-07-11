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
            for(int i = 0; i<N; i++)
            {
                char ch = 'a'+i;
                cout<<ch<<" ";
            }

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


