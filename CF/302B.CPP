#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin >> n >> m;
    int a[n+1]; a[0] = 0;
    for (int i = 1; i <= n; i++) {
        int c,t,tmp; cin >> c >> t;
        tmp = c*t;
        a[i] = a[i-1] + tmp;
    }
    for (int i = 0; i < m; i++) {
        int cur; cin >> cur;
        int l = 0, r = n;
        while (l <= r) {
            int m = (l+r)/2;
            if (a[m] < cur) l = m + 1;
            else r = m - 1;
        }
        cout << l << "\n";
    }
    return 0;
}
