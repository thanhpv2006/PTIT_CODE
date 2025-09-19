#include <bits/stdc++.h>

using namespace std;

string sol(int n){
    map<int, string> m ={{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},{100, "C"},{90, "XC"},{50, "L"},{40, "XL"},{10, "X"},{9, "IX"},{5, "V"},{4, "IV"},{1, "I"}};
    string s = "";
    for(auto it = m.rbegin(); it!=m.rend();it++){
        while(n>=it->first){
            s += it-> second;
            n -=it->first;
        }
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n;
        cin >> n;
        cout << sol(n) << "\n";
    }
    return 0;
}
