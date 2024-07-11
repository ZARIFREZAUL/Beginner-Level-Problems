#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D, coun;
    while(cin>>N)
    {
        for(int i=1; i<=N; i++)
        {
            coun = 0;
            for(int j=1; j<=9; j++)
            {
                cin>>D;
                if(D==1)
                    coun++;
            }
            if(coun>=6)
                cout<<"Case "<<i<<": Yes"<<endl;
            else
                cout<<"Case "<<i<<": No"<<endl;
        }
    }

    return 0;
}
/*
3
1 1 1 1 1 1 1 1 1
1 1 1 0 0 0 0 0 0
1 1 1 0 0 0 1 1 1
*/
