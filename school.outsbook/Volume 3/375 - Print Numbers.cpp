#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        if(N>26||N<-26||N==0)
        {
            cout<<"Error!!"<<endl;
        }
        else
        {
            N>=1&&N<=26?cout<<"+"<<N<<"+"<<char(N+64)<<endl:
                cout<<"("<<N<<"-"<<char(abs(N)+96)<<")"<<endl;
        }
    }
}

