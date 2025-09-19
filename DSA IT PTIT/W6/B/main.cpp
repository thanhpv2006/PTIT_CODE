#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    int d[] = {100, 20, 10, 5, 1};
    long long ans = 0;
    for (int x : d) {
        ans += n / x;
        n %= x;
    }
    cout << ans << '\n';
    return 0;
}
