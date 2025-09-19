#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s) {
            if (c == '*') {
                if (!st.empty()) st.pop();
            } else {
                st.push(c);
            }
        }
        string res;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        cout << res << "\n";
    }
    return 0;
}
