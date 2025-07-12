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

    cout << "Reversed order: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}