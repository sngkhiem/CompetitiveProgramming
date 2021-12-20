#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        string ans = "NO\n";
        int n; cin >> n;
        int p; cin >> p; int l[p];
        for (int i = 0; i < p; i++) cin >> l[i];
        for (int i = 0; i < (1<<p); i++) {
            int sum = 0;
            int mask = i;
            while (mask != 0) {
                int tmp = ((mask) & -(mask));
                int pos = __builtin_ctz(tmp);
                sum += l[pos];
                mask -= tmp;
            }
            if (sum == n) {
                ans = "YES\n";
                break;
            }
        }
        cout << ans;
    }
    return 0;
}
