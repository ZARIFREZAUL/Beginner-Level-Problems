#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    while(cin>>A>>B>>C)
    {
        int arr[3] = {A, B, C};
        sort(arr, arr+3);
        cout<<arr[1]*arr[1]<<endl;
    }
}
