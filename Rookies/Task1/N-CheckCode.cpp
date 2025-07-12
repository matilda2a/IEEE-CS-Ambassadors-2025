#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;

    string s;
    cout << "Enter the code: ";
    cin >> s;

    bool valid = true;
    if (s.length() != a + b + 1) {
        valid = false;
    } else {
        if (s[a] != '-') {
            valid = false;
        } else {
            for (int i = 0; i < s.length(); ++i) {
                if (i == a) continue;
                if (s[i] < '0' || s[i] > '9') {
                    valid = false;
                    break;
                }
            }
        }
    }
    if (valid)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}