#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];

    cout << "Enter Numbers: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Search for: ";
    cin >> x;

    int position = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "Found at index " << position << endl;
    } else {
        cout << "-1 (Element not found)" << endl;
    }
    delete[] arr; 
    return 0;
}