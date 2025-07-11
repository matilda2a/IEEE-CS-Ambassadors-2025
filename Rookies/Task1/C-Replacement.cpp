#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[1000];
    cout << "Enter Numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] > 0)
            arr[i] = 1;
        else if (arr[i] < 0)
            arr[i] = 2;
    }
    cout << "Array after Replacement: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}