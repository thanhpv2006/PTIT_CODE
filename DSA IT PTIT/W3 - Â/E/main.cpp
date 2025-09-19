#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, V;
    cin >> n >> V;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    vector<int> f(V + 1, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = V; j >= v[i]; --j) {
            f[j] = max(f[j], f[j - v[i]] + v[i]);
        }
    }
    cout << f[V] << "\n";
}
