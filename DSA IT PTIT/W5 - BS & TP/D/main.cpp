#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int m = n / 2;
    long long l = a[m];
    long long r = a[m] + k + 1;
    while (l <= r) {
        long long mid = (l + r) / 2;
        long long c = 0;
        for (int i = m; i < n; i++) {
            if (a[i] < mid) {
                c += mid - a[i];
            } else {
                break;
            }
        }
        if (c <= k) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << r << endl;
    return 0;
}
