#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);
    vector<long long> c(n+m);
    c.clear();
    for(long long i=0;i<n;i++){
        cin >> a[i];
        c.push_back(a[i]);
    }
    for(long long i=0;i<m;i++){
        cin >> b[i];
        c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    for(long long i=0;i<n+m;i++){
        cout << c[i] << " ";
    }
    return 0;
}
