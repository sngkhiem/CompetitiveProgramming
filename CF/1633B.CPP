#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') cnt0++;
            else cnt1++;
        }
        if (cnt1 != cnt0) cout << min(cnt1,cnt0) << "\n";
        else cout << cnt1-1 << "\n";
    }
    return 0;
}
