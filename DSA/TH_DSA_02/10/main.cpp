#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> cd(ll n) {
    vector<ll> c(100, 0);
    if (n < 0) return c;
    ll p = 1;
    while (n / p > 0) {
        ll l = n / (p * 10);
        ll h  = (n / p) % 10;
        ll r = n % p;
        for (int d = 0; d < 100; d++) c[d] += l * p;
        for (int d = 0; d < h; d++) c[d] += p;
        c[h] += r + 1;
        c[0] -= p;
        p *= 10;
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        if (a > b) swap(a, b);
        vector<ll> c = cd(b), c1 = cd(a - 1);
        for (int i = 0; i < 10; i++) {
            cout << c[i] - c1[i] << (i == 9 ? '\n' : ' ');
        }
    }
}
