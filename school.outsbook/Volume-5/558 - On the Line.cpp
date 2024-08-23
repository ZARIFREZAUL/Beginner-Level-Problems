#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X1, Y1, X2, Y2, X3, Y3;
    while(cin>>X1>>Y1>>X2>>Y2>>X3>>Y3)
    {
        int area = X1 * (Y2 - Y3) + X2 * (Y3 - Y1) + X3 * (Y1 - Y2);
        area==0?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
}

/*
2 2 1 1 4 5
-1 -1 0 0 2 2
-1 2 0 0 2 2
*/

