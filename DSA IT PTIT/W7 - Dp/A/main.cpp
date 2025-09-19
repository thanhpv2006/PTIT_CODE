#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> H(n);
    for (int i = 0; i < n; i++) {
        cin >> H[i];
    }
    vector<long long> dp(n, LLONG_MAX);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        int s = max(0, i - k);
        for (int j = s; j < i; j++) {
            long long c = dp[j] + abs(H[i] - H[j]);
            if (c < dp[i]) {
                dp[i] = c;
            }
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}
