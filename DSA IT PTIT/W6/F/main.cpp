#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    if (!(cin >> n)) return 0;
    long long ba = 0;
    vector<int> d;
    d.reserve(2*n);

    for (int i = 0; i < 2*n; ++i) {
        int a, b;
        cin >> a >> b;
        ba += b;
        d.push_back(a - b);
    }
    nth_element(d.begin(), d.begin()+n, d.end());
    long long c = 0;
    for (int i = 0; i < n; ++i) c += d[i];
    cout << ba + c << '\n';
    return 0;
}
