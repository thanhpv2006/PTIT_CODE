#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<long long> w(n), v(m);
    for (int i = 0; i < n; ++i) cin >> w[i];
    for (int i = 0; i < m; ++i) cin >> v[i];
    int t = 1 << n;
    vector<long long> s;
    s.reserve(t);
    for (int x = 0; x < t; ++x) {
        long long y = 0;
        for (int i = 0; i < n; ++i)
            if (x & (1 << i)) y += w[i];
        s.push_back(y);
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    string a;
    a.reserve(m);
    for (int i = 0; i < m; ++i) {
        a.push_back(binary_search(s.begin(), s.end(), v[i]) ? '1' : '0');
    }
    cout << a << '\n';
}
