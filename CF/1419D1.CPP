#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    int ans[n+1], idxLo = 1, idxHi = n-2;
    ans[1] = a[n-1]; ans[n] = a[n];
    for (int i = 2; i <= n-1; i++) 
        if (i&1) ans[i] = a[idxHi--];
        else ans[i] = a[idxLo++];

    int cnt = 0;
    for (int i = 2; i <= n-1; i++) if (ans[i] < ans[i-1] && ans[i] < ans[i+1]) cnt++;
    cout << cnt << "\n";
    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
    return 0;
}

