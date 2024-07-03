// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    while(cin>>N)
    {
        int decimal = 0;
        for(int i=N.length()-1; i>=0; i--)
        {
           if (N[i]=='1')
           {
               decimal += pow(2, N.length()-1-i);
           }
        }
        cout<<decimal<<endl;
    }
    return 0;
}
