#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[100];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int minSum = arr[0] + arr[1] + 1; // j - i = 1

        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int sum = arr[i] + arr[j] + (j - i);
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }
        cout << minSum << endl;
    }
    return 0;
}