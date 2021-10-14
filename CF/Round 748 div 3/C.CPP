#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        int ans = 0;
        int a[k];
        for (int i = 0; i < k; i++) cin >> a[i];
        sort(a,a+k,greater<int>());
        int cur = 0;
        for (int i = 0; i < k; i++) {
            if (cur < a[i]) {
                cur += n - a[i];
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
