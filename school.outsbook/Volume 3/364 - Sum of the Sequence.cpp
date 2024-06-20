#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, coun=0;
    while(cin>>n)
    {
        coun++;
        n%2==0?cout<<"Case "<<coun<<": "<<(-n)/2<<endl:
        cout<<"Case "<<coun<<": "<<(-n/2)+n<<endl;
    }
}
