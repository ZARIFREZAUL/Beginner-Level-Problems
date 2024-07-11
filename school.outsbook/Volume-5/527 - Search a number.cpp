#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, K, num;
    while(cin>>T)
    {
        for(int i=1; i<=T; i++)
        {
            cin>>N;
            vector<int> vec;
            for(int j=1; j<=N; j++)
            {
                cin>>num;
                vec.push_back(num);
            }

            cin>>K;
            vector<int>::iterator it = find(vec.begin(), vec.end(), K);

            if (it != vec.end())
            {
                cout <<"Case "<<i<<": " << distance(vec.begin(), it)+1 << endl;
            }
            else
            {
                cout <<"Case "<<i<<": " << "Not Found" << endl;
            }
        }
    }

    return 0;
}
/*
3

5 8 5 2 10 9 10

3 50 20 60 20

4 1 2 2 4 5
*/

