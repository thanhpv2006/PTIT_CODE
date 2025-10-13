#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin >> t;
    while(t--){
        string s;cin>>s;
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n));
        for(int len=2;len<=n;len++)
            for(int i=0;i+len-1<n;i++){
                int j=i+len-1;
                dp[i][j]=(s[i]==s[j]?dp[i+1][j-1]:
                          min(dp[i+1][j],dp[i][j-1])+1);
            }
        cout<<dp[0][n-1]<<'\n';
    }
}
