#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>> a[i];
    sort(a.begin(),a.end());
    int c = 0,i=0;
    for(int j=0;j<n;j++){
        while(a[j]-a[i] >5) ++i;
        c = max(c,j-i+1);
    }
    cout << c << "\n";
    return 0;
}
