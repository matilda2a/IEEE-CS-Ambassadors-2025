#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> cost(26);
    for (int i = 0; i < 26; ++i) cin >> cost[i];

    int n = s.size();

    // Replace '?' optimally
    for (int i = 0; i < n; ++i) {
        if (s[i] == '?') {
            char bestChar = 'a';
            int bestDiff = INT_MAX;

            for (char c = 'a'; c <= 'z'; ++c) {
                int diff = 0;
                if (i > 0) diff += abs(cost[c - 'a'] - cost[s[i - 1] - 'a']);
                if (i + 1 < n && s[i + 1] != '?') diff += abs(cost[c - 'a'] - cost[s[i + 1] - 'a']);

                if (diff < bestDiff || (diff == bestDiff && c < bestChar)) {
                    bestDiff = diff;
                    bestChar = c;
                }
            }
            s[i] = bestChar;
        }
    }

    // Calculate total cost
    long long totalCost = 0;
    for (int i = 0; i < n - 1; ++i) {
        totalCost += abs(cost[s[i] - 'a'] - cost[s[i + 1] - 'a']);
    }

    cout << totalCost << endl;
    cout << s << endl;

    return 0;
}
