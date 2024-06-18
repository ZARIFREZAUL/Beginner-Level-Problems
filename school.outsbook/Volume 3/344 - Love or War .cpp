#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, X;
    while(cin>>N>>X)
    {
        (X*100.0)/N>50?cout<<"The war is stop.":cout<<"The war is going on.";
        cout<<endl;
    }
}
