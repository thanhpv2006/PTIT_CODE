#include <bits/stdc++.h>
using namespace std;

int sol(const string &s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (freq[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << sol(s) << "\n";
    }
    return 0;
}
