#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        reverse(a.begin(), a.end()); 
        for (char &c : a) {
            if (c == 'p') c = 'q';
            else if (c == 'q') c = 'p';
        }
        cout << a << "\n";
    }
    return 0;
}
