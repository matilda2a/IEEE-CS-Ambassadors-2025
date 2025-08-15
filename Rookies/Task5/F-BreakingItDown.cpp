#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> parts;
        int place = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                parts.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        cout << parts.size() << "\n";
        for (int x : parts) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
