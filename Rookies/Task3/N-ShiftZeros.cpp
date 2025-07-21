#include <iostream>
using namespace std;

void shiftZeros(int arr[], int n) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < n) {
        arr[index++] = 0;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i == n - 1 ? '\n' : ' ');
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) cin >> arr[i];
    shiftZeros(arr, n);
    return 0;
}
