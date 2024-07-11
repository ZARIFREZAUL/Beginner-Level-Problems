#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    long long X1, Y1, X2, Y2;
    while(cin>>X1>>ch>>Y1>>X2>>ch>>Y2)
    {
        if(X1*Y2==X2*Y1) cout<<"x = y"<<endl;
        else if(X1*Y2>X2*Y1) cout<<"x > y"<<endl;
        else cout<<"x < y"<<endl;
    }
    return 0;
}

/*
1/2 1/3

2/3 4/5

1/3 7/21
*/

