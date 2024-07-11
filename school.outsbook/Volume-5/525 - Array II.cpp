#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        int arr[N];
        for(int i=1; i<=N; i++)
        {
            cin>>arr[i];
        }
        for(int i=N; i>=1; i--)
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
/*
5

1 2 3 4 5

3

1 2 3
*/

