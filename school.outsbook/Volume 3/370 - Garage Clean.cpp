#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M, N, P, coun=0;
    while(cin>>M>>N>>P)
    {
        coun++;
        if(M==0&&N==0)
            break;
        double moneyperhour = P*1.0/(M+N), distance = moneyperhour*1.0*abs(M-N);
        if(M>=N)
            cout<<"Case "<<coun<<": "<<moneyperhour*M+distance<<"taka "
                <<moneyperhour*N-distance<<"taka"<<endl;
        else
            cout<<"Case "<<coun<<": "<<moneyperhour*M-distance<<"taka "
                <<moneyperhour*N+distance<<"taka"<<endl;
    }
}

