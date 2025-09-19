#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<long long> s;
    long long a=0,b=1;
    while(a<=1e18){
        s.insert(a);
        long long c = a+b;
        a=b;
        b=c;
    }
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(s.count(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
