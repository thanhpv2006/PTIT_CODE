#include <bits/stdc++.h>

using namespace std;
int x[100];
int n,k;
bool f[100];
int c=0;
void res(){
    c++;
    cout << setw(2) << c << ": ";
    for(int i=1;i<=n;i++){
        cout << x[i] << " ";
    }
    cout << "\n";
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(f[j]){
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
    cin >> n;
    for(int i=1;i<=n;i++) {f[i] = true;}
    Try(1);
    return 0;
}
