#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C, D, E;
    int coun=0;
    while(cin>>A>>B>>C>>D>>E)
    {
        coun++;
        if(A<=0.00||B<=0.00||C<=0.00||D<=0.00||E<=0.00)
        {
            cout<<"Case "<<coun<<": "<<"Invalid"<<endl;
            continue;
        }
        else
        {
            double arr[5] = {A, B, C, D, E};
            sort(arr, arr+5);
            cout<<"Case "<<coun<<": "<<fixed<<setprecision(2)<<arr[2]<<endl;
        }

    }
}


