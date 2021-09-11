#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;

signed main() {
    fastIO;
    int n,m,ma=0,ans;
    cin >> n >> m; int a[m+5];
    for (int i = 1; i <= m; i++) cin >> a[i];
    sort(a+1,a+1+m);
    for (int i = 1; i <= m; i++) {
        if (m-i+1 < n) {
            a[i] = a[i] * (m-i+1);
            if (ma<a[i]) {
                ma = a[i]; ans = a[i] / (m-i+1);
            }
        }
        else {
            a[i] = a[i]*n;
            if (ma<a[i]) {
                ma = a[i]; ans = a[i] / n;
            }
        }
    }
    cout << ans << " " << ma;
    return 0;
}