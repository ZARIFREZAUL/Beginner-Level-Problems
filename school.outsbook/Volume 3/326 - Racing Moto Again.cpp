#include<bits/stdc++.h>
using namespace std;
int main()
{
    double H;
    while(cin>>H)
    {
        double sq = H*H;
        cout<<fixed<<setprecision(2);
        cout<<"Area of Rectangle: "<<sq*4<<endl;
        cout<<"Area of Triangle: "<<int(ceil(sq*2))<<endl;
    }
}


