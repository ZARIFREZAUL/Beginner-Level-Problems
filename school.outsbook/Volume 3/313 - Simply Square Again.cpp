#include <iostream>
#include <cmath> // For pow function

using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int a;

    // Read inputs until EOF
    while (cin >> a) {
        // Step 1: Square the given number
        int step1 = a * a;

        // Step 2: Add all the digits of the answer
        int step2 = sumOfDigits(step1);

        // Step 3: Square the answer of step 2
        int step3 = step2 * step2;

        // Step 4: Subtract step 3’s answer from step 1
        int step4 = step1 - step3;

        // Step 5: Square the answer of step 4
        long long step5 = step4 * step4;

        // Step 6: Print the value of 1’s digit
        int result = step5 % 10;

        cout << result << endl;
    }

    return 0;
}
