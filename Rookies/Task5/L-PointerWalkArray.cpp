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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long need = 0;
        bool ok = true;
        bool ended = false;

        for (int i = 0; i < n; i++) {
            need += a[i];
            if (need < 0) { 
                ok = false;
                break;
            }
            if (need == 0) {
                ended = true;
                for (int j = i + 1; j < n; j++) {
                    if (a[j] != 0) {
                        ok = false;
                        break;
                    }
                }
                break;
            }
        }

        if (need != 0) ok = false;
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
