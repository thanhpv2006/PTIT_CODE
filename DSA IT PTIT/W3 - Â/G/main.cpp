#include <bits/stdc++.h>
using namespace std;

int n, p;
vector<string> ans;

void gen(int open, int close, string &s)
{
    if ((int)s.size() == n)
    {
        ans.push_back(s);
        return;
    }
    if (open < p)
    {
        s.push_back('(');
        gen(open+1, close, s);
        s.pop_back();
    }
    if (close < open)
    {
        s.push_back(')');
        gen(open, close+1, s);
        s.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    p = n/2;
    string s;
    gen(0, 0, s);
    for (auto &t : ans) cout << t << '\n';
    cout << ans.size() << '\n';
}
