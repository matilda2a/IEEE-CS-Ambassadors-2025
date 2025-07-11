#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[1000];
    cout << "Enter Numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= 10) {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
    return 0;
}