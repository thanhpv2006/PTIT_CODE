#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        pq.push(x);
    }
    long long t = 0;
    while (pq.size() > 1) {
        long long f = pq.top(); pq.pop();
        long long s = pq.top(); pq.pop();
        long long sum = f + s;
        t += sum;
        pq.push(sum);
    }
    cout << t << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        sol();
    return 0;
}
