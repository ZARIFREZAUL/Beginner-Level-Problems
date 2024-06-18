#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, X;
    while(cin>>N>>X)
    {
        cout<<fixed<<setprecision(3);
        cout<<X/(N*365.0)<<" taka"<<endl;
    }
}
