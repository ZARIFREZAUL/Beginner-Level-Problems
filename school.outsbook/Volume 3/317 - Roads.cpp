#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int T, M;
    while(cin>>T>>M)
    {
        double length = (T/4.0)*M+(T/4.0)*(M/2.0)+(T/4.0)*(M/3.0)+(T/4.0)*(M/5.0);
        cout<<fixed<<setprecision(2)<<length<<endl;
    }
    return 0;
}


