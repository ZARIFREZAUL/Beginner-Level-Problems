#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    while(cin>>A>>B>>C)
    {
        int arr[3] = {A, B, C};
        sort(arr, arr+3);
        if(arr[0]+arr[1]>=arr[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
