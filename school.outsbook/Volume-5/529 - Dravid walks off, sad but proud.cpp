#include <bits/stdc++.h>
using namespace std;

int main()
{
    int I, T, N;
    while(cin>>I>>T>>N)
    {
        double avg = N*1.0/(I-T);
        cout<<fixed<<setprecision(2)<<avg<<endl;
    }
    return 0;
}
/*
286 32 13288
1 0 31
*/


