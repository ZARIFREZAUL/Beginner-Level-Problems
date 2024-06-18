#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, D, E, F;
    while(cin>>A>>B>>C>>D>>E>>F)
    {
        (A+C+E)%3==0?cout<<(A+C+E)/3:cout<<(A+C+E)<<"/3";
        cout<<" ";
        (B+D+F)%3==0?cout<<(B+D+F)/3:cout<<(B+D+F)<<"/3";
        cout<<endl;
    }
}

