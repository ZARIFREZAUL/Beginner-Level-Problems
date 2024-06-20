#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, D, E;
    char m;
    while(cin>>A>>B>>C>>D>>E)
    {
        int result = A-B+C-D+E, mod = result%11;
        if(result == 0)
            cout<<"Welcome Anna"<<endl;
        else if(mod == 0)
            cout<<"Anna can enter"<<endl;
        else
            cout<<"Anna cannot enter"<<endl;
    }
}
