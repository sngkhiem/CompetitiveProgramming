#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n,greater<int>());
    for (int i = 0; i < n; i++) {
        if (m > a[i]) m -= a[i],ans++;
        else {ans++; break;}
    }
    cout << ans;
    return 0;
}
