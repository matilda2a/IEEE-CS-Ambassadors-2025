#include <iostream>
using namespace std;

long long power(long long x, int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

long long equation(long long x, int n) {
    long long sum = power(x, 0) - 1;  // (X^0 - 1)
    for (int i = 2; i <= n; i += 2) {  // Only even powers
        sum += power(x, i);
    }
    return sum;
}

int main() {
    long long x;
    int n;
    cin >> x >> n;
    cout << equation(x, n) << endl;
    return 0;
}
