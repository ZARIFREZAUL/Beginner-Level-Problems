#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, coun=0;
    while(cin>>A)
    {
        set<int> angels_list;
        for(int h=0; h<12; h++)
        {
            for(int m=0; m<60; m++)
            {
                //angels.insert(abs(6*m-(h*0.5+m*6)));
                double angel = abs(6.0*m-h*30.0);
                if(angel>180)
                    angel = 360 - angel;
                angels_list.insert(round(angel));
            }
        }

        coun++;
        if (angels_list.count(A))
        {
            cout << "Case " << coun << ": Y" << endl;
        }
        else
        {
            cout << "Case " << coun << ": N" << endl;
        }
    }
}
