// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    double X, W, L, H;
    while(cin>>X>>W>>L>>H)
    {
        cout<<fixed<<setprecision(2)<<X*W*L*H*1000<<" kg"<<endl;
    }
    return 0;
}