#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll mx[100005], mn[100005], a[100005];
int ans;

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) mx[i] = max(mx[i-1],a[i]);
    mn[n] = a[n];
    mn[0] = - 1e18;
    mn[n+1] = 1e18;
    for (int i = n-1; i >= 1; i--) mn[i] = min(mn[i+1],a[i]);
    for (int i = 1; i <= n; i++)
        if (mx[i-1] <= a[i] && mn[i+1] > a[i]) ans++;
    cout << ans;
    return 0;
}
