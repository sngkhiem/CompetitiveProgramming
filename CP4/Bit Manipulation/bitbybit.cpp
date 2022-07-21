#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> ans; ans.resize(32,2);
        for (int j = 0; j < n; j++) {
            string op; cin >> op;
            if (op == "SET") {
                int i; cin >> i;
                ans[i] = 1;
            } else if (op == "CLEAR") {
                int i; cin >> i;
                ans[i] = 0;
            } else if (op == "OR") {
                int i,j; cin >> i >> j;
                if (ans[i] == 1 || ans[j] == 1) ans[i] = 1;
                else if (ans[i] == 0 && ans[j] == 0) ans[i] = 0;
                else ans[i] = 2;
            } else {
                int i,j; cin >> i >> j;
                if (ans[i] == ans[j] && ans[i] == 1) ans[i] = 1;
                else if (ans[i] == 0 || ans[j] == 0) ans[i] = 0;
                else ans[i] = 2;
            }
        }
        for (int i = 31; i >= 0; i--) {
            if (ans[i] == 2) cout << "?";
            else cout << ans[i];
        }
        cout << "\n";
    }
    return 0;
}
