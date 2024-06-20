#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, S, L, coun=0;
    cin>>T;
    while(T--)
    {
        cin>>S>>L;
        coun++;
        cout<<fixed<<setprecision(2);
        cout<<"Case "<<coun<<": "<<L*3600.0/S<<" km/h"<<endl;
    }
}


