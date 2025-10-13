#include <bits/stdc++.h>
using namespace std;

long long s[1000000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 1000000 / 2; i++) {
        for (int j = i * 2; j <= 1000000; j += i) {
            s[j] += i;
        }
    }

    int c = 0;
    for (int i = a; i <= b; i++) {
        if (s[i] > i) c++;
    }

    cout << c;
    return 0;
}
