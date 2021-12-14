#include <bits/stdc++.h>

using namespace std;

void solve() {
    deque<int> dq;
    string op; cin >> op;
    int n; cin >> n;
    cin.ignore();
    bool reverseCheck = false;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        int cur; cin >> cur;
        dq.push_back(cur);
    }
    cin.ignore();
    if (n == 0) cin.ignore();
    for (int i = 0; i < op.size(); i++) {
        if (op[i] == 'D') {
            if (dq.size() == 0) {
                cout << "error\n"; return;
            } else if (reverseCheck) dq.pop_back();
            else dq.pop_front();
        }
        if (op[i] == 'R') reverseCheck = !reverseCheck;
    }

    cout << "[";
    while (!dq.empty()) {
        if (!reverseCheck) {
            cout << dq.front(); dq.pop_front();
        } else {
            cout << dq.back(); dq.pop_back();
        }
        if (dq.size() != 0) cout << ",";
    }
    cout << "]\n";

}

signed main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
