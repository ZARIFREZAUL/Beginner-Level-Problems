#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int W, X, Y;
    while(cin>>W>>X>>Y)
    {
            cout<<min(min(W,X), min(X, Y))<<endl;
    }
    return 0;
}

