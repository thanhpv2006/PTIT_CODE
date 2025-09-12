#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long t = 1;
    for (int i = 0; i < n; ++i) t *= 3LL;
    auto s = [&](long long v) {
        string s(n, '0');
        for (int i = n - 1; i >= 0; --i) {
            s[i] = char('0' + (v % 3));
            v /= 3;
        }
        return s;
    };
    for (long long i = 2; i <= t; i += 2) {
        string r = s(i - 1);
        cout << i << ": " << r << '\n';
    }
    return 0;
}
