#include <bits/stdc++.h>

using namespace std;

int n,k;
vector<int> v;
int c = 0;

bool nt(long long n){
    if(n<2) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2) ==0)
            return false;
    }
    return true;
}

void sinh(int i){
    if(v.size() == k){
        c++;
        if(nt(c)){
            cout << c << ": ";
            for(int i=0;i<k;i++){
                cout << v[i];
                if(i<k-1) cout << " ";
            }
            cout << "\n";
        }
        return;
    }
    for(int j=i;j<=n;j++){
        v.push_back(j);
        sinh(j+1);
        v.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    sinh(1);
    return 0;
}
