#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long N, result;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>N;
        int mid = N/2, result;
        if(N%2==0)
            result = mid;
        else
        {
            result = -(mid+1);
        }
        cout<<"Case "<<i<<": "<<result<<endl;
    }
}
/*
10
1
2
3
10
11
*/


