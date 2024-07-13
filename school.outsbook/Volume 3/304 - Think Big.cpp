// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long N;
    cin>>N;
    unsigned long long res = 0;
    res = (N*567 - 357 +7492)%100;
    res = (res*9879 - 4787)%100;
    res = (res*7493 - 498)%100;
    res = (res*1237 + 100)%100;
    res = (res*9879 - 9)%100;
    cout<<res<<endl;
    return 0;
}

/*
11
1000
9999
*/
