#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int digsum(int n) {
    int res = 0;

    while (n > 0) {
        res += n % 10; // Extract last digit and add to sum
        n = n / 10;     // Remove last digit
    }
    return res;
}

int main() {
    int num;

    // Input from user
    cout << "Enter a number:";
    cin >> num;

    // Call digsum function and display result
    cout << "Sum of digits:" << digsum(num) << endl;

    return 0;
}
