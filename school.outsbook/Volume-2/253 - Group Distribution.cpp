// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    while(cin>>X>>Y>>Z)
    {
        int member = X/Y;
        int end = member*Z;
        cout<<end-member+1<<" "<<end<<endl;
    }
    return 0;
}