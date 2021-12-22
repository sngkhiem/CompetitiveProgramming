#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        int a[n];
        int ans = -1;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        for (int i = 0; i < m; i++) {
            int tmp; cin >> tmp;
            if (binary_search(a,a+n,tmp) && ans == -1) ans = tmp;
        }
        if (ans == -1) cout << "NO\n";
        else cout << "YES\n" << 1 << " " << ans << "\n";
    }
    return 0;
}
