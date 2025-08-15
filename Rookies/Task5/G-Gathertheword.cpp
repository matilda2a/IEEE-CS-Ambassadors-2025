#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(8);
        for (int i = 0; i < 8; i++) {
            cin >> grid[i];
        }

        string word = "";
        for (int col = 0; col < 8; col++) {
            bool found = false;
            for (int row = 0; row < 8; row++) {
                if (grid[row][col] != '.') {
                    found = true;
                    break;
                }
            }
            if (found) {
                for (int row = 0; row < 8; row++) {
                    if (grid[row][col] != '.') {
                        word += grid[row][col];
                    }
                }
                break;
            }
        }

        cout << word << "\n";
    }
    return 0;
}
