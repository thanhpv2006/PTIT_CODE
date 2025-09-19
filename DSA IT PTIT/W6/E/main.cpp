#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }
    sort(v.begin(), v.end(), [&](int i, int j) {
        return a[i] * b[j] > a[j] * b[i];
    });
    long long t = 0;
    long long c = 0;
    for (int i : v) {
        c += b[i];
        t += a[i] * c;
    }
    cout << t << endl;
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << v[i] + 1;
    }
    cout << endl;
    return 0;
}
