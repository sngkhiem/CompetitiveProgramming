#include <bits/stdc++.h>

using namespace std;

int a[105],b[105];
bool vis[105];

signed main() {
    int n,m; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; i++) cin >> b[i];
    if (n < m) swap(a,b),swap(n,m);
    sort(a+1,a+1+n); sort(b+1,b+1+m);
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (abs(b[i]-a[j]) <= 1 && !vis[j]) {
                ans++; vis[j] = true; break;
            }
        }
    }
    cout << ans;
    return 0;
}
