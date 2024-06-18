#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, D, E;
    while(cin>>A>>B>>C>>D>>E)
    {
        int arr[5] = {A, B, C, D, E};
        for(int i=0;i<5;i++)
        {
          cout<<char(arr[i]+64)<<" ";
        }
        cout<<endl;
    }
}
