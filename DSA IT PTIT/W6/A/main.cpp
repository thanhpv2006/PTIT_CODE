#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<long long,long long>> a(n);
        for (int i = 0; i < n; ++i) {
            long long l, r;
            cin >> l >> r;
            a[i] = {r, l};
        }
        sort(a.begin(), a.end());
        long long c = LLONG_MIN/4;
        long long ans = 0;
        for (auto &p : a) {
            long long r = p.first;
            long long l = p.second;
            if (l >= c) {
                ++ans;
                c = r;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
