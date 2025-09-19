#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    map<string,vector<string>> mp;
    for(int i=0;i<n;i++){
        string k = s[i];
        sort(k.begin(),k.end());
        mp[k].push_back(s[i]);
    }
    map<string,vector<string>> m;
    for(auto &x:mp){
        string c = x.second[0];
        m[c] = x.second;
    }
    for(auto &x : m){
        for(auto &c : x.second){
            cout << c << " ";
        }
        cout << "\n";
    }
    return 0;
}
