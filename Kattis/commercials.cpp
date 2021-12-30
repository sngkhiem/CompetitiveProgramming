#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,p; cin >> n >> p;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= p;
    }

    int curMax = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        curMax += a[i];
        ans = max(ans,curMax);
        if (curMax < 0) curMax = 0;
    }
    cout << ans;
    return 0;
}
