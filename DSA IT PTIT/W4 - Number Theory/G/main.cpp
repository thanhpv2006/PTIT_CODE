#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000000009LL;

long long mp(long long a, long long b, long long mod) {
    a %= mod;
    b %= mod;
    long long res = 0;
    while (b) {
        if (b & 1) {
            res = (res + a) % mod;
        }
        a = (a * 2) % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << mp(a, b, MOD) << '\n';
    }
    return 0;
}
