#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    stack<char> st;;
    unordered_map<char,char> p = {{')', '('}, {']', '['}, {'}', '{'}, {'>', '<'}};
    for(auto c : s){
        if(p.count(c)){
            if(st.empty() || st.top() != p[c]) return false;
            st.pop();
        }else{
            st.push(c);
        }
    }
    return st.empty();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (check(s) ? "YES" : "NO") << "\n";
    }
    return 0;
}

