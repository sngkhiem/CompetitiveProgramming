#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n],mn=1000000000;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn,a[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) ans += (a[i] - mn);
        cout << ans << "\n";
    }
    return 0;
}
