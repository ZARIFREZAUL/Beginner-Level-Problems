#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y;
    while(cin>>X>>Y)
    {
        if(X==0&&Y==0)
            break;
        X>Y?cout<<X<<endl:cout<<Y<<endl;
    }
}
