#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    long long a[n];
    long long f[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    f[0] = a[0];
    for (int i = 1; i < n; i++) f[i] = f[i-1] + a[i];
    int q; cin >> q;
    while (q--) {
        long long k; cin >> k;
        int l = 0, r = n-1;
        while (l <= r) {
            int m = (l+r)/2;
            if (int(f[m] / (m+1)) < k) l = m + 1;
            else r = m - 1;
        }
        cout << l << "\n";
    }
    return 0;
}
