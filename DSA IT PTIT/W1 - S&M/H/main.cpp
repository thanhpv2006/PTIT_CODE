#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<long long> s;
    long long a=0;
    long long b=1;
    long long c;
    s.insert(a);s.insert(b);
    while(true){
        c = a+b;
        if(c>1e18) break;
        s.insert(c);
        a=b;b=c;
    }
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << (s.count(n) ? "YES\n" : "NO\n");
    }
    return 0;
}
