#include <bits/stdc++.h>
using namespace std;

bool digit_check(int N)
{
    if(N%2==0)
        return 0;
    else
        return 1;
}

int main()
{
    string N;
    while(cin>>N)
    {
        int even=0, odd=0;
        for(int i=0; i<N.size(); i++)
        {
            if(digit_check(N[i]-'0'))
                odd++;
            else
                even++;
        }
        cout<<"There are "<<even<<" Even digits & "
            <<odd<<" Odd digits"<<endl;
    }
}

/*
12345
123
144
*/

