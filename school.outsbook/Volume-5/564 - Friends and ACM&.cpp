#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; case_num++) {
        int n;
        cin >> n;

        vector<vector<int>> balance(4, vector<int>(4, 0));
        string names[4] = {"Moni", "Rasel", "Touhid", "Ullash"};

        for (int day = 0; day < n; day++) {
            int M, R, T, U;
            string payer;
            cin >> M >> R >> T >> U >> payer;

            int total = M + R + T + U;
            int per_person = total / 4;

            int payer_index = -1;
            for (int i = 0; i < 4; i++) {
                if (names[i] == payer) {
                    payer_index = i;
                    break;
                }
            }

            int expenses[4] = {M, R, T, U};

            for (int i = 0; i < 4; i++) {
                if (i != payer_index) {
                    balance[i][payer_index] += (per_person - expenses[i]);
                }
            }
        }

        cout << "Case " << case_num << ":\n";
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (i != j) {
                    cout << balance[i][j] << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
