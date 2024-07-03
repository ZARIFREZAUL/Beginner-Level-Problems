// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    long U, V, W, X, Y, Z;
    while(cin>>U>>V>>W>>X>>Y>>Z)
    {
        long Days = U*V*W;
        long charge = Days*X*Z;
        int joined = X+Y;
        int final_days = (Days*X)/joined;
        
        cout<<"Person : " <<X<<endl;
        cout<<"Days : " <<Days<<" Days"<<endl;
        cout<<"Charge : " <<charge<<" Taka"<<endl<<endl;
        
        cout<<"Person : " <<joined<<endl;
        cout<<"Days : " <<final_days<<" Days"<<endl;
        cout<<"Charge : " <<joined*final_days*Z<<" Taka"<<endl;
    }
    return 0;
}