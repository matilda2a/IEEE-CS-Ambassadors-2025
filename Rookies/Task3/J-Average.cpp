#include <iostream>
#include <iomanip>
using namespace std;

double calculateAverage(int n) {
    double sum = 0, x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    return sum / n;
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(6) << calculateAverage(n) << endl;
    return 0;
}
