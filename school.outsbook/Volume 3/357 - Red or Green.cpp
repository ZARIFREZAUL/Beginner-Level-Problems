#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, D;
    char m;
    while(cin>>A>>m>>B>>C>>m>>D)
    {
        double p=A*1.0/B, q=C*1.0/D;
        if(p>q)
            cout<<"Red"<<endl;
        else if(p<q)
            cout<<"Green"<<endl;
        else
            cout<<"Equal"<<endl;
    }
}

