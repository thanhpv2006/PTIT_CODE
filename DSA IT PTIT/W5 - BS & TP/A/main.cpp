#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int l = 1;
    int r = 1000000;
    while(l<r){
        int mid = (l+r+1)/2;
        cout << mid << endl;
        string s;
        if(!(cin >> s)) return 0;
        if(s == "<") {r = mid - 1;}
        else {l = mid;}
    }
    cout << "! " << l <<endl;
    return 0;
}
