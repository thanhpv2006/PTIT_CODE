#include <bits/stdc++.h>
using namespace std;

const int M = 1000000007;

long long f(long long b, long long e, long long m) {
    long long r = 1;
    b %= m;
    while (e) {
        if (e & 1) {
            r = (r * b) % m;
        }
        b = (b * b) % m;
        e >>= 1;
    }
    return r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long k1 = (n + 1) / 2;
        long long k2 = n / 2;
        long long a = f(5, k1, M);
        long long b = f(4, k2, M);
        cout << (a * b) % M << '\n';
    }
    return 0;
}
