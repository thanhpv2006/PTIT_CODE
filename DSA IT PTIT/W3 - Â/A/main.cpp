#include <bits/stdc++.h>
using namespace std;

long long n, r, a = -1;
int l, h;
void d(int p, int c4, long long x) {
    if (c4 > h || p - c4 > h) return;
    if (p == l) { if (c4 == h && x >= n) a = (a==-1?x:min(a,x)); return; }
    if (a != -1 && x > a) return;
    d(p+1, c4+1, x*10+4);
    d(p+1, c4,   x*10+7);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    l = max(1,(int)to_string(n).size());
    if (l & 1) ++l;
    for (;; l += 2) {
        a = -1; h = l/2;
        d(0, 0, 0);
        if (a != -1) { cout << a << "\n"; break; }
    }
}
