#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M, N, P;
    while(cin>>M>>N>>P)
    {
        int arr[3]= {M, N, P};
        double mid = (M+N+P)/2.0;
        sort(arr, arr+3);
        cout<<fixed<<setprecision(2);
        arr[0]+arr[1]>=arr[2]?
        cout<<sqrt(mid*(mid-M)*(mid-N)*(mid-P))<<endl:cout<<"0.00"<<endl;
    }
}


