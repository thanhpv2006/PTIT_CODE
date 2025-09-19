#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int s,v;
    cin >> s;
    map<int,int> mp;
    while(s--){
        int x,y;
        cin >> x >> y;
        mp[x] = y;
    }
    cin >> v;
    while(v--){
        int x,y;
        cin >> x >> y;
        mp[x] += y;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}
