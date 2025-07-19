#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool isPalindrome = true;
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}