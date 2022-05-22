#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int n; cin >> n; ll a[n+1]; for (int i = 1; i <= n; i++) cin >> a[i];
    ll cur = 0, ans = a[1];
    for (int i = 1; i < n; i++)
        if (cur + (a[i] - a[i+1]) < 0) ans += -(cur+(a[i]-a[i+1])),cur = 0;
        else cur += (a[i] - a[i+1]);
    cout << ans;
    return 0;
}
