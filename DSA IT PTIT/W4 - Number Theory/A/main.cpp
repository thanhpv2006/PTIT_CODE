#include <bits/stdc++.h>

using namespace std;

bool nt(long long n){
    if(n<2) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(nt(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
