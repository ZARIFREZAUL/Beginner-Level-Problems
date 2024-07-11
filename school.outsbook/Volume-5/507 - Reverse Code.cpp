#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        string output, N;
        int number = atoi(input.c_str());
        stringstream ss;
        ss<<number;
        N = ss.str();
        reverse(N.begin(), N.end());
        for(int i=0; i<N.length(); i++)
        {
            if(N[i]=='0')
                output+='J';
            else
                output+=static_cast<char>('A'+N[i]-'1');
        }
        cout<<output<<endl;
    }
    return 0;
}

/*
12345
10101
11
1
0
9
99
12340
012345
*/
