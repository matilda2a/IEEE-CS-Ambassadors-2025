#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    long long sum = 0;

    cout << "Enter Numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        long long num;
        cin >> num;
        sum += num;
    }

    cout << "Abs sum: " << abs(sum) << endl;

    return 0;
}
