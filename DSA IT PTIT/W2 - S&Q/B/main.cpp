#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;
    while(t--){
        cin >> n;
        queue<string> q;
        q.push("1");
        cout << "[";
        for(int i=1;i <=n;i++){
            string s = q.front();
            q.pop();
            cout << s << (i==n? "]\n" : ", ");
            q.push(s+'0');
            q.push(s+'1');
        }
    }
    return 0;
}
