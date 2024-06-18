#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R;
    while(cin>>R)
    {
        cout<<fixed<<setprecision(2)<<3.1416*(pow(R, 2)+pow(R/2.0, 2)+pow(R/4.0, 2))<<endl;
    }
}
