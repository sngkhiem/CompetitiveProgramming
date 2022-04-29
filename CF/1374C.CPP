#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        int close = 0, open = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') open++;
            else {
                if (open) open--;
                else close++,ans = max(ans,close);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
