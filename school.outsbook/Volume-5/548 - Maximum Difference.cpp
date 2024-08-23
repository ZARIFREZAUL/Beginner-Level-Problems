#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, Y;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>Y;
        int arr[Y];
        for(int i=0; i<Y; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+Y);
        cout<<arr[Y-1]-arr[0]<<endl;
    }
}

/*
2
5
1 2 7 3 5
2
5 5
*/

