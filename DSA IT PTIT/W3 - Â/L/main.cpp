#include <bits/stdc++.h>
using namespace std;

bool nt(long long n){
    if (n < 2) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i++){
        if(n%i==0||n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int n; vector<long long> ans;
void dfs(int len, long long cur){
    if (len==n){ ans.push_back(cur); return; }
    for (int d: {1,3,7,9}){
        long long t = cur*10 + d;
        if (nt(t)) dfs(len+1, t);
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int p: {2,3,5,7}) if (n==1) ans.push_back(p); else if (nt(p)) dfs(1,p);
    for (size_t i=0;i<ans.size();++i){ if(i) cout << ' '; cout << ans[i]; }
    cout << '\n';
}
