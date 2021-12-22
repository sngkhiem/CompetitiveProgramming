#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int prev = a[0], ans = 1;
        for (int i = 1; i < n; i++)
            if (a[i] > prev) {
                prev = a[i];
                ans++;
            }
        cout << ans << "\n";
    }
    return 0;
}
