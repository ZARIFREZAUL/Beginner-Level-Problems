#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P;
    double M, X, Y, Z;
    char S;
    while(cin>>M>>P>>S>>X>>Y>>Z)
    {
        double cost = X+Y+Z, save = M*(1-P/100.0);
        cout<<fixed<<setprecision(2);
        cout<<"Monthly Save = "<<save<<endl;
        cout<<"Total Cost = "<<cost<<endl;
        cout<<"Minimum Time = "<<int(ceil(cost/save))<<" Months"<<endl;
    }
}
