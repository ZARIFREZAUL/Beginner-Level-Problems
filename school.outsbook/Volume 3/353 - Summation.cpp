#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        cout<<pow(N,2)+pow(N+2, 2)+pow(N+4, 2)+pow(N+6, 2)<<endl;
    }
}
