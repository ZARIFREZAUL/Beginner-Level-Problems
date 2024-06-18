#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, D;
    while(cin>>A>>B>>C>>D)
    {
        cout<<fixed<<setprecision(2);
        cout<<sqrt(pow((A-B), 2)+pow((C-D), 2))<<endl;
    }
}
