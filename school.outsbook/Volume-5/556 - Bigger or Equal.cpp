#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string M, N;
    cin>>T;
    for(int i = 1; i<=T; i++)
    {
        cin>>M>>N;
        if(M.length()>N.length())
            cout<<"a is bigger than b"<<endl;
        else if(M.length()<N.length())
            cout<<"b is bigger than a"<<endl;
        else
        {
            if (M > N)
                cout << "a is bigger than b" << endl;
            else if (M < N)
                cout << "b is bigger than a" << endl;
            else
                cout << "They are equal" << endl;
        }
    }
}

/*
4
12 5
45 99
5 5
5 0
*/




