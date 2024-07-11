#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D, result, coun;
    while(cin>>N)
    {
        if(N==0)
            break;
        else
        {
            result=0, coun = 0;
            for(int i = 1; i<=N; i++)
            {
                cin>>D;
                if(D>0)
                {
                    result+=D;
                    coun++;
                }
            }
            if(coun==0)
                cout<<"0"<<endl;
            else
                cout<<fixed<<setprecision(3)<<result*1.0/coun<<endl;
        }

    }

    return 0;
}
/*
4
30 100 5
10 100 5
1 20 2
1 0 2
*/






