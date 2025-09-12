#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<bool> f(n, false);
    for (int i = 0; i < k; i++) {
        f[i] = true;
    }
    do {
        bool c = true;
        for (int i = 0; i < n; i++) {
            if (f[i]) {
                if (!c) {
                    cout << " ";
                }
                cout << a[i];
                c = false;
            }
        }
        cout << endl;
    } while (prev_permutation(f.begin(), f.end()));

    return 0;
}
