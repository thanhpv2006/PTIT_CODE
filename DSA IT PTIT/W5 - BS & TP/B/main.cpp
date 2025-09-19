#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c, n;
    cin >> c >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    int a = *min_element(t.begin(), t.end());
    int b = *max_element(t.begin(), t.end());
    int l = a - 1, r = b + 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (t[i] < m) x++;
            else { y = max(y, x); x = 0; }
        }
        y = max(y, x);

        if (y <= c) l = m + 1;
        else r = m - 1;
    }
    cout << r << '\n';
    return 0;
}
