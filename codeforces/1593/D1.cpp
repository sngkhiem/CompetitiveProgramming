#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; int a[n];
        int mi = INF;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mi = min(mi,a[i]);
        }
        for (int i = 0; i < n; i++)
            a[i] -= mi;
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans = __gcd(ans,a[i]);
        if (ans == 0) cout << "-1\n";
        else cout << ans << "\n";
    }
    return 0;
}
