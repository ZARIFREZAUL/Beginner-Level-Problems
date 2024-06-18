#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        N%2==1?cout<<"Secret Ingredients: "<<11*N<<" ounce":
                   cout<<"Secret Ingredients: "<<22*N<<" ounce";
        cout<<endl;
    }
}
