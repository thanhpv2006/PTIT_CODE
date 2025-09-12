#include <bits/stdc++.h>

using namespace std;
int n,s;
vector<long long> a;
int ans = INT_MAX;

void Try(int i,int c, long long sum){
    if(sum == s){
        ans = min(ans,c);
        return;
    }
    if(i == n|| sum >s|| c >=ans) return;
    Try(i+1,c+1,sum+a[i]);
    Try(i+1,c,sum);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend());
    Try(0,0,0);
    if(ans == INT_MAX){
        cout << "-1";
    }else{
        cout << ans;
    }
    return 0;
}
