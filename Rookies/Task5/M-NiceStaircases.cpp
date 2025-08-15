#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const long long LIMIT = (long long)1e18;
    vector<long long> cost;
    for (int k = 1; ; ++k) {
        long long p = 1LL << k;
        long long n = p - 1;
        long long half = p / 2;
        if (n > LIMIT / half) break;
        long long c = n * half;
        if (c > LIMIT) break;
        cost.push_back(c);
    }

    int t; 
    cin >> t;
    while (t--) {
        long long x; 
        cin >> x;
        int ans = 0;
        for (long long c : cost) {
            if (x >= c) { x -= c; ++ans; }
            else break;
        }
        cout << ans << "\n";
    }
    return 0;
}
