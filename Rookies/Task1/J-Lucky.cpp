#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int minVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == minVal) {
            count++;
        }
    }
    if (count % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
    return 0;
}