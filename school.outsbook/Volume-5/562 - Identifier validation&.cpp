#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isValidIdentifier(string s) {
    int len = s.length();

    if (!isalpha(s[0])) {
        return false;
    }

    for (int i = 1; i < len; i++) {
        if (!isalnum(s[i]) && s[i] != '_') {
            return false;
        }

        if (s[i] == '_' && (i == len - 1 || s[i - 1] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 1; i <= T; i++) {
        string S;
        getline(cin, S);

        if (isValidIdentifier(S)) {
            cout << "Case " << i << ": Valid" << endl;
        } else {
            cout << "Case " << i << ": Invalid" << endl;
        }
    }
    return 0;
}

/*
5
abc_3
abc def
a_bc
abc_
_abc
*/
