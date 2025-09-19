#include <iostream>
using namespace std;

const int M = 1000000007;

long long fp(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b) {
        if (b & 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
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
        long long n, k;
        cin >> n >> k;
        cout << fp(n, k, M) << '\n';
    }
    return 0;
}
