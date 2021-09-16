#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a,a+n); sort(b,b+m);
    int i = 0, j = 0, ans = 1000000000;
    while (i < n && j < m) {
        ans = min(ans,abs(a[i]-b[j]));
        if (a[i] > b[j]) j++;
        else i++;
    }
    cout << ans;
    return 0;
}
