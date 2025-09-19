#include <iostream>
using namespace std;

const int MOD = 1000000007;
const int ma = 100000;
long long dp[ma + 1];

int main() {
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i-1] + 2 * dp[i-2]) % MOD;
    }
    cout << dp[n] << endl;
    return 0;
}
