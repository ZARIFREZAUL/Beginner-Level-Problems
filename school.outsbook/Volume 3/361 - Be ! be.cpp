#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M, N, K, D1;
    while(cin>>M>>N>>K>>D1)
    {
        int total = M+N+K;
        double limit = total*15*75/100.0;

        if (total == 0)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if(total*3*D1>=limit)
            cout<<"Nezam can attend"<<endl;

        else if(total*3*D1<limit)
            cout<<"Nezam cannot attend"<<endl;
    }
}


