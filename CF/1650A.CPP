#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        string s; char c;
        cin >> s >> c;
        string ans = "NO\n";
        for (int i = 0; i < s.size(); i++)
            if (i % 2 == 0 && s[i] == c) {
                ans = "YES\n"; break;
            }
        cout << ans;
    }
    return 0;
}
