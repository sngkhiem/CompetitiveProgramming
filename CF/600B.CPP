#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    int a[n+1],b[m+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    sort(a+1,a+1+n);
    for (int i = 1; i <= m; i++) {
        int l = 1, r = n;
        while (l <= r) {
            int m = (l+r)/2;
            if (a[m] <= b[i]) l = m + 1;
            else r = m - 1;
        }
        cout << l - 1 << " ";
    }
    return 0;
}
