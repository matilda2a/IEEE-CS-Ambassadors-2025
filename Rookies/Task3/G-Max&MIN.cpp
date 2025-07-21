#include <iostream>
using namespace std;

void findMinMax(int n) {
    int x;
    cin >> x;
    int mn = x, mx = x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }

    cout << mn << " " << mx << endl;
}

int main() {
    int n;
    cin >> n;
    findMinMax(n);
    return 0;
}
