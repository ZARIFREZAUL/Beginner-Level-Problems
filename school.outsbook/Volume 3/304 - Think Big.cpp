// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N;
    while(cin>>N)
    {
        unsigned long long res = 0;
        res = N*567 - 357 +7492;
        res = res*9879 - 4787;
        res = res*7493 - 498;
        res = res*1237 + 100;
        res = res*9879 - 9;
        int last = res%100;
        cout<<last<<endl;
        break;
    }
    return 0;
}

