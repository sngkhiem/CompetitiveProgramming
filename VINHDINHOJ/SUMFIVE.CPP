#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    long long ans = 0;
    for (int i = n-1; i >= n-5; i--) ans += a[i];
    cout << ans;
    return 0;
}
