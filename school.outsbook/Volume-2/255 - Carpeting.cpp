// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    double Y, Z;
    while(cin>>Y>>Z)
    {
        double length = sqrt(Z/(3*Y));
        cout<<"The length is "<<fixed<<setprecision(2)<<length<<" meter"<<endl;
        
        cout<<"The width is "<<fixed<<setprecision(2)<<3*length<<" meter"<<endl;
    }
    return 0;
}