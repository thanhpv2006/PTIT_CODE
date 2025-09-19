#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long,long long> mp;
    for(int i =0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int c =0;
    for(auto it = mp.begin();it != mp.end();it++){
        c = max(c, static_cast<int>(it->second));
    }
    cout << c;
    return 0;
}
