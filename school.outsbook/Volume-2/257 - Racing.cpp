// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    double L, N;
    while(cin>>L>>N)
    {
        cout<<fixed<<setprecision(2)<<N/(2*3.1416*L)<<" km"<<endl;
    }
    return 0;
}