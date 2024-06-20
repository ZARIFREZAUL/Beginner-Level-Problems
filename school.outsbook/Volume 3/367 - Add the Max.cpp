#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y, start=0;
    while(cin>>X>>Y)
    {
        if(X==0&&Y==0)
            break;
        else if(X>Y)
        {
            start+=X;
            cout<<X<<" "<<start<<endl;
        }
        else
        {
            start+=Y;
            cout<<Y<<" "<<start<<endl;
        }
    }
}
