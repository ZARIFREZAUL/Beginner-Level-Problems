#include <bits/stdc++.h>
using namespace std;

bool leap_year(int N)
{
    if(N%400==0)
        return true;
    else if(N%4==0&&N%100!=0)
        return true;
    else return false;
}

int main()
{
    int T, Y;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>Y;
        leap_year(Y)?cout<<"Leap year"<<endl:cout<<"Ordinary year"<<endl;
    }
}

/*
7
2016
1900
2000
2100
2400
1999
1990
*/

