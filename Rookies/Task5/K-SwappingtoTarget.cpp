#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    string s_sorted = s, t_sorted = t;
    sort(s_sorted.begin(), s_sorted.end());
    sort(t_sorted.begin(), t_sorted.end());
    if (s_sorted != t_sorted) {
        cout << -1 << "\n";
        return 0;
    }

    vector<int> moves;

    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) continue;

        int pos = i;
        while (pos < n && s[pos] != t[i]) pos++;

        for (int j = pos; j > i; j--) {
            swap(s[j], s[j - 1]);
            moves.push_back(j);
        }
    }

    cout << moves.size() << "\n";
    for (int i = 0; i < (int)moves.size(); i++) {
        cout << moves[i] << (i + 1 == moves.size() ? '\n' : ' ');
    }

    return 0;
}
