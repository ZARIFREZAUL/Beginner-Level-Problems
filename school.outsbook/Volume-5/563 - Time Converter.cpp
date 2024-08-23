#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    int T, M;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin>>M;
        int day, hour, minutes;
        day = int(M/(1440));
        int temp = M - day*1440;
        hour = int(temp/60);
        minutes = temp - hour*60;
        cout << "Case " << i << ": " << day << " Days "
             << hour << " Hours " << minutes << " Minutes" << endl;
    }
    return 0;
}

/*
5
22
1501
1000000
5000
60000
*/
