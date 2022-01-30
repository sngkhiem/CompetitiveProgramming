#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n,m; cin >> n >> m;
    int a[n],ans=0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    for (int i = 0; i < m; i++) {
        int cur; cin >> cur;
        auto tmp = lower_bound(a,a+n,cur);
        ans += (*tmp-cur);
    }
    cout << ans;
    return 0;
}
