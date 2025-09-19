#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k,a1,s=0;
    cin >> n >> k >> a1;
    vector<long long> t(n - 1);
    for (auto &x : t) { cin >> x; s += x; }
    long long ans = a1 - s;
    if (k > 0) {
        nth_element(t.begin(), t.begin() + k, t.end(), greater<long long>());
        ans += 2 * accumulate(t.begin(), t.begin() + k, 0LL);
    }
    cout << ans << '\n';
}
