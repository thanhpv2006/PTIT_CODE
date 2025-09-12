#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    string se;
    cin >> se;
    vector<string> res;
    for(string i : s){
        if(i!=se){
            res.push_back(i);
        }
    }
    sort(res.begin(),res.end());
    vector<vector<string>> rest;
    do{
        vector<string> t;
        t.push_back(se);
        for(string i:res){
            t.push_back(i);
        }
        rest.push_back(t);
    } while (next_permutation(res.begin(),res.end()));
    sort(rest.begin(),rest.end());
    for(auto &v : rest){
        for(int i=0;i< v.size();i++){
            cout << v[i];
            if(i<v.size()-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
