#include <bits/stdc++.h>
using namespace std;

int main() {
    string day;
    map<string, int> day_to_int;
    day_to_int["Saturday"] = 0;
    day_to_int["Sunday"] = 1;
    day_to_int["Monday"] = 2;
    day_to_int["Tuesday"] = 3;
    day_to_int["Wednesday"] = 4;
    day_to_int["Thursday"] = 5;
    day_to_int["Friday"] = 6;

    vector<string> int_to_day(7);
    int_to_day[0] = "Saturday";
    int_to_day[1] = "Sunday";
    int_to_day[2] = "Monday";
    int_to_day[3] = "Tuesday";
    int_to_day[4] = "Wednesday";
    int_to_day[5] = "Thursday";
    int_to_day[6] = "Friday";

    while (cin >> day) {
        int current_day_index = day_to_int[day];
        int new_day_index = (current_day_index + 10) % 7;
        cout << int_to_day[new_day_index] << endl;
    }

    return 0;
}
