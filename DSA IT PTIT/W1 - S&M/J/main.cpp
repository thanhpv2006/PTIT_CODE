#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string, int> mp;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            mp[s]++;
        }
        for(auto x : mp){
            cout << x.first << " " << x.second << "\n";
        }
    }
    return 0;
}
