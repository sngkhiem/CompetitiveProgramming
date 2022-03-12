#include <bits/stdc++.h>

using namespace std;

bool vis[100005];

signed main() {
    int n,k; cin >> n >> k;
    long long a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+2,a+1+n,greater<int>());
    long long ans = a[1];
    for (int i = 2; i < 2+k; i++) ans += a[i],vis[i] = true;
    for (int i = 2; i <= n; i++)
        if (!vis[i]) ans -= a[i];
    cout << ans;
    return 0;
}
