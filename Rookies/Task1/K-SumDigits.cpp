#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    string digits;
    cout << "Enter digits: ";
    cin >> digits;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += digits[i] - '0';
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}