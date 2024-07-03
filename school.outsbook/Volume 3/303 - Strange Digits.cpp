// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    while(cin>>input)
    {
        int N=input,R = 0, rev = 0;
        while(N>0)
        {
            R = N%10;
            rev = rev*10+R;
            N = N/10;
        }
        int sub = abs(input - rev), sum=0;
        while(sub>0)
        {
            sum += sub%10;
            sub = sub/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
