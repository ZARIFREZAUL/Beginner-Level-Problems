#include<bits/stdc++.h>
using namespace std;

int Value(int X, int Y)
{
    int extra;
    if(X>=10&&X<=19)
        extra = 10;
    else if(X>=20&&X<=49)
        extra = 25;
    else
        extra = 55;
    return extra;
}

int main()
{
    int X, Y, extra, output;
    while(cin>>X>>Y)
    {
        if(X==Y)
        {
            if(X>=0&&X<=9)
                extra = 1;
            else
                extra = Value(X, Y);
            output = X*Y*extra;
        }
        else
        {
            if(X>=0&&X<=9)
                extra = 0;
            else
                extra = Value(X, Y);
            output = X+Y+extra;
        }
        cout<<output<<endl;
    }
}

