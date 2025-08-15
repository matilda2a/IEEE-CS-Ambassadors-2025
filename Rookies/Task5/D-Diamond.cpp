#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        int min_r = n+1, max_r = 0, min_c = m+1, max_c = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '#') {
                    min_r = min(min_r, i+1);
                    max_r = max(max_r, i+1);
                    min_c = min(min_c, j+1);
                    max_c = max(max_c, j+1);
                }
            }
        }

        int center_r = (min_r + max_r) / 2;
        int center_c = (min_c + max_c) / 2;

        cout << center_r << " " << center_c << "\n";
    }
    return 0;
}
