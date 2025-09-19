#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;

int main() {
    int n, S;
    cin >> n >> S;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(S + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = S; j >= a[i]; j--) {
            dp[j] = (dp[j] + dp[j - a[i]]) % MOD;
        }
    }

    cout << dp[S] << endl;
    return 0;
}
