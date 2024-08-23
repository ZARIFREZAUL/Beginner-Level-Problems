#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string M;
    cin>>T;
    for(int i = 1; i<=T; i++)
    {
        cin>>M;
        int len = M.size();
        string max = M, dup;
        for(int j=0; j<len-1; j++)
        {
            for(int k=j+1; k<len; k++)
            {
                dup = M;
                if(dup[j]<dup[k])
                {
                    swap(dup[j], dup[k]);
                    if(dup>max)
                        max = dup;
                }
            }
        }
        cout<<max<<endl;
    }
}

/*
3
132454
54541
909999999999999998
*/
