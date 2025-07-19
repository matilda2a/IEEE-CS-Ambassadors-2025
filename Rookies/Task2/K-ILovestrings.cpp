#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s, t;
        cin >> s >> t;

        string result = "";
        int maxLen = max(s.length(), t.length());

        for (int i = 0; i < maxLen; ++i) {
            if (i < s.length()) result += s[i];
            if (i < t.length()) result += t[i];
        }

        cout << result << endl;
    }

    return 0;
}