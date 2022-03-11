#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int q; cin >> q;
    for (int i = 1; i <= q; i++) {
        int cur; cin >> cur;
        int l = 0, r = n-1;
        while (l <= r) {
            int m = (l+r)/2;
            if (a[m] < cur) l = m + 1;
            else r = m - 1;
        }
        cout << l << "\n";
    }
    return 0;
}
