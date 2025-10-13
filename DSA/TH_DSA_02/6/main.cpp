#include <bits/stdc++.h>
using namespace std;
long long c[31];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    c[0]=1;
    for(int i=1;i<=30;i++) c[i]=c[i-1]*2*(2*i-1)/(i+1);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<c[n]<<'\n';
    }
}
