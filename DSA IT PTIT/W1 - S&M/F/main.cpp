#include <bits/stdc++.h>

using namespace std;

int sol(vector<int> &a,int lim){
    multiset<int> s;
    int ans =0, l =0;
    for(int r=0;r<a.size();r++){
        s.insert(a[r]);
        while(*s.rbegin() - *s.begin() >lim){
            s.erase(s.find(a[l]));
            l++;
        }
        ans = max(ans, r-l+1);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << sol(a,k) << "\n";
    }
    return 0;
}
