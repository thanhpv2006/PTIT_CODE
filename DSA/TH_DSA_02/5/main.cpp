#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>> t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n); long long sum=0;
        for(int&i:a){cin>>i; sum+=i;}
        long long ans=sum;
        for(int i=0;i<n;i++){
            long long s=0;
            for(int j=i;j<n;j++){
                s+=a[j];
                if(sum%s==0){
                    long long t=0; bool ok=1;
                    for(int k=0;k<n;k++){
                        t+=a[k];
                        if(t>s){ok=0;break;}
                        if(t==s)t=0;
                    }
                    if(ok&&t==0) ans=min(ans,s);
                }
            }
        }
        cout<<ans<<'\n';
    }
}
