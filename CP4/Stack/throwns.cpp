#include <bits/stdc++.h>

using namespace std;

signed main() {
    stack<int> pos; pos.push(0);
    int n,q; cin >> n >> q;
    while (q--) {
        string op;
        cin >> op;
        if (op != "undo") {
            int cur = stoi(op);
            int tmp = pos.top();
            tmp += cur;
            tmp %= n;
            while (tmp < 0) tmp += n;
            pos.push(tmp);
        } else {
            int cnt; cin >> cnt;
            while (cnt != 0) {
                cnt--; pos.pop();
            }
        }
    }
    cout << pos.top();
    return 0;
}
