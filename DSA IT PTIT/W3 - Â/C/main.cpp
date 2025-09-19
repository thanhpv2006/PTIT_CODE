#include <bits/stdc++.h>

using namespace std;

long long k;

long long c(long long n){
    if (n < k+2) return 1;
    if ((n - k) % 2 != 0) return 1;
    long long a =(n-k)/2;
    long long b =(n+k)/2;
    return c(a)+c(b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n >> k;
    cout << c(n) << '\n';
    return 0;
}
