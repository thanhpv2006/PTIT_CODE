#include <bits/stdc++.h>

using namespace std;
int x[100];
int n,m;
bool f[100];
void res(){
    for(int i=1;i<=n;i++){
        cout << x[i] << " ";
    }
    cout << "\n";
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(f[j]){
            if(i==n&&j!=m) continue;
            x[i] = j;
            f[j] = false;
            if(i==n) res();
            else Try(i+1);
            f[j] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) {f[i] = true;}
    Try(1);
    return 0;
}
