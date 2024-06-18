#include<bits/stdc++.h>
using namespace std;
int main()
{
    double W, P;
    while(cin>>W>>P)
    {
        cout<<fixed<<setprecision(2);
        cout<<2*W+2*W*(P/100)<<endl;
    }
}
