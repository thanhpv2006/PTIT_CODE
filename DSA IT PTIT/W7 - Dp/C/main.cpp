#include <bits/stdc++.h>
using namespace std;

const int ma = 1000000;
vector<int> dp(ma + 1, 0);

int main() {
    dp[0] = 0;
    for (int i = 1; i <= ma; i++) {
        dp[i] = 1e9;
        int c = i;
        while (c) {
            int d = c % 10;
            if (d != 0) {
                dp[i] = min(dp[i], 1 + dp[i - d]);
            }
            c /= 10;
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}
