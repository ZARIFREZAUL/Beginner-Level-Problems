// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, R, rev;
    while(cin>>N)
    {
        rev = 0;
        while(N>0)
        {
            R = N%10;
            rev = rev*10+R;
            N = N/10;
        }
        cout<<rev<<endl;
    }
    return 0;
}
