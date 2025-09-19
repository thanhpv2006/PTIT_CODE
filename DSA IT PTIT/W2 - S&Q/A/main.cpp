#include <bits/stdc++.h>

using namespace std;

long long f[50];

long long fib(long long n) {
    if (f[n] != 0)
        return f[n];
    f[n] = fib(n-1) + fib(n-2);
    return f[n];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    f[1] = 1;
    f[2] = 2;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fib(n) << "\n";
    }
    return 0;
}
