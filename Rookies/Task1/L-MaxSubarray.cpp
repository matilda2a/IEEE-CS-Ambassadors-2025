#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;

        int arr[100];
        cout << "Enter the numbers: ";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << "Max of each subarray: ";
        for (int i = 0; i < n; ++i) {
            int maxVal = arr[i];
            for (int j = i; j < n; ++j) {
                if (arr[j] > maxVal) {
                    maxVal = arr[j];
                }
                cout << maxVal << " ";
            }
        }
        cout << endl;
    }
    return 0;
}