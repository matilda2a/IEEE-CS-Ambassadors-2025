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

    int minVal = arr[0];
    int minIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    cout << "Num " << minVal << " in position " << (minIndex + 1) << endl;
    return 0;
}