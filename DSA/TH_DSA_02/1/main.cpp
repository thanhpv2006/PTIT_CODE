#include <bits/stdc++.h>

using namespace std;

struct j {
    int s;
    int e;
};

bool compare(j a, j b) {
    return a.e < b.e;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<j> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].s >> v[i].e;
        }
        sort(v.begin(), v.end(), compare);
        int c = 0;
        int l = -1;
        for (int i = 0; i < n; i++) {
            if (v[i].s >= l) {
                c++;
                l = v[i].e;
            }
        }
        cout << c << "\n";
    }
    return 0;
}
