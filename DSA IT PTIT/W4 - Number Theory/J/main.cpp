#include <iostream>
using namespace std;

const long long m = 1000000000007LL;
const long long p = m - 1;

long long pow(long long b, long long e, long long mod) {
    long long res = 1;
    b %= mod;
    while (e) {
        if (e & 1) {
            res = (__int128)res * b % mod;
        }
        b = (__int128)b * b % mod;
        e >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k == 0) {
            cout << 1 << '\n';
        } else {
            n %= m;
            if (n == 0) {
                cout << 0 << '\n';
            } else {
                long long e = k % p;
                cout << pow(n, e, m) << '\n';
            }
        }
    }
    return 0;
}
