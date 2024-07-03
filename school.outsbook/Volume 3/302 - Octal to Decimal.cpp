#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    while(cin>>N)
    {
        int decimal = 0;
        for(int i=N.length()-1; i>=0; i--)
        {
            decimal += pow(8, N.length()-1-i)*(N[i]-'0');
        }
        cout<<decimal<<endl;
    }
    return 0;
}
