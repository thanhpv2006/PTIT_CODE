#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = unordered_set<char>(s.begin(), s.end()).size();
        vector<int> c(256, 0);
        int h = 0, res = 1e9, l = 0;
        for (int r = 0; r < s.size(); r++) {
            if (++c[s[r]] == 1) h++;
            while (h == n && c[s[l]] > 1) c[s[l++]]--;
            if (h == n) res = min(res, r - l + 1);
        }
        cout << res << '\n';
    }
}
