#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int q;
    string s;
    cin >> q >> s;

    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    unordered_map<char, char> mp;

    if (q == 1) { // Encryption
        for (int i = 0; i < original.size(); ++i)
            mp[original[i]] = key[i];
    } else { // Decryption
        for (int i = 0; i < original.size(); ++i)
            mp[key[i]] = original[i];
    }

    for (char c : s) cout << mp[c];
    cout << endl;

    return 0;
}
