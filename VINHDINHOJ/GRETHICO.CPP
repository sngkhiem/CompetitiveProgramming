#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

signed main() {
    int n; cin >> n; int a[n+1]; a[0] = -1;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+1+n);
    int ans = -inf;
    for (int i = 1; i <= n; i++) {
        int l = i+1, r = n;
        while (l <= r) {
            int m = (l+r)/2;
            if (a[m] <= a[i]*2) l = m + 1;
            else r = m - 1;
        }
        ans = max(ans,l - i);
    }
    cout << ans;
    return 0;
}
