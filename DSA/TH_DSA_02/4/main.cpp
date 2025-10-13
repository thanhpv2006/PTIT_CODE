#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    for(auto &x:a) cin>>x.first>>x.second;
    sort(a.begin(),a.end());
    priority_queue<int,vector<int>,greater<int>> pq;
    for(auto [d,p]:a){
        pq.push(p);
        if(pq.size()>d) pq.pop();
    }
    long long s=0;
    while(!pq.empty()) s+=pq.top(), pq.pop();
    cout<<s;
}
