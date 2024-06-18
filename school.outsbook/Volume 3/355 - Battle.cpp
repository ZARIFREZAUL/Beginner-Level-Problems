#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, X, Y;
    while(cin>>A>>B>>X>>Y)
    {
        int jalalLength = A + B;
        int pratapLength = X + Y;

        if (jalalLength == pratapLength)
        {
            cout << "They make friendship" << endl;
        }
        else if (pratapLength > jalalLength)
        {
            cout << "Pratap Wins" << endl;
        }
        else
        {
            cout << "Jalal Wins" << endl;
        }
    }
}

