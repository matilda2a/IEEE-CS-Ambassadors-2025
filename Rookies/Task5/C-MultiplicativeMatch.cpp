#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long ans = 0;
        for (long long m = 1; m <= r1 * r2; m *= k) {
            vector<long long> divs;
            for (long long d = 1; d * d <= m; d++) {
                if (m % d == 0) {
                    divs.push_back(d);
                    if (d != m / d) divs.push_back(m / d);
                }
            }
            for (auto x : divs) {
                if (x >= l1 && x <= r1) {
                    long long y = m / x;
                    if (y >= l2 && y <= r2) {
                        ans++;
                    }
                }
            }
            if (m > LLONG_MAX / k) break; 
        }
        cout << ans << "\n";
    }
    return 0;
}
