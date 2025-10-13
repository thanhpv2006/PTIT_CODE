#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin >> t;
    while(t--){
        long long p; cin>>p;
        if(p==0){cout<<10<<"\n";continue;}
        if(p==1){cout<<1<<"\n";continue;}
        vector<int>d;
        for(int i=9;i>=2;i--)
            while(p%i==0){d.push_back(i); p/=i;}
        if(p>1) cout<<-1;
        else for(int i=d.size()-1;i>=0;i--) cout<<d[i];
        cout<<"\n";
    }
}
