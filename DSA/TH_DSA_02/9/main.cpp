#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int>len(n);
    for(int i=0;i<n;i++){
            string s;
            cin>>s;
            len[i]=s.size();
    }
    long long res=0; vector<int>c(21,0);
    int l=0;
    for(int r=0;r<n;r++){
        while(r-l>k) c[len[l++]]--;
        res+=c[len[r]];
        c[len[r]]++;
    }
    cout<<res;
}
