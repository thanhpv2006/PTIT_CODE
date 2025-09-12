#include <bits/stdc++.h>

using namespace std;
int x[100];
int n,k;
void res(){
    for(int i=1;i<=k;i++){
        cout << x[i] << " ";
    }
    cout << "\n";
}

void Try(int i){
    for(int j=n-k+i;j>=x[i-1]+1;j--){
        x[i] = j;
        if(i==k) res();
        else Try(i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
    cin >> n >> k;
    x[0] = 0;
    Try(1);
    }
    return 0;
}
