#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k; int a[n+1];
        int ans = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1,a+1+n);
        for (int i = 1; i <= n - 2*k; i++) ans += a[i];
        for (int i = 1; i <= k; i++) ans += (a[n-2*k+i]/a[n-k+i]);
        cout << ans << "\n";
    }

}
