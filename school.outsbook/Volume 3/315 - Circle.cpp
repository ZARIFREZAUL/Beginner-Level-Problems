#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int N, M;
    while(cin>>N>>M)
    {
        double sum = N+N;
        double div = sum/13.0;
        double rou = round(div * 1000.0) / 1000.0;
        double mod = div+13;
        cout<<fixed<<setprecision(3)<<pow(mod, M)<<endl;
    }
    return 0;
}


