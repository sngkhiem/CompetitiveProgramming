#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string ans = "";
        string cur;
        for (int i = 0; i < n-2; i++) {
            cin >> cur;
            if (!i) ans += cur;
            else if (cur[0] != ans[ans.size()-1]) ans += cur;
            else ans.push_back(cur[1]);
        }
        if (ans.size() != n) {
            for (int i = 0; i < n-ans.size(); i++) ans += "a";
        }
        cout << ans << "\n";
    }
    return 0;
}