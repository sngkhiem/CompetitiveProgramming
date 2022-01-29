#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll inf = 1e18;

signed main() {
    int n; cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n-1;
    ll curLeft = a[l], curRight = a[r],ans=-inf;

    while (true) {
        if (r==l) break;
        if (curLeft == curRight) ans = max(ans,curLeft);
        if (curLeft <= curRight) {
            l++,curLeft+=a[l];
            if (l == r) break;
            if (curLeft == curRight) ans = max(ans,curLeft);
        } else {
            r--,curRight+=a[r];
            if (l == r) break;
            if (curRight == curLeft) ans = max(ans,curRight);
        }
    }
    l = 0, r = n-1; curLeft = a[l]; curRight = a[r];
    ll ans2 = -inf;
    while (true) {
        if (r == l) break;
        if (curLeft == curRight) ans2 = max(ans2,curLeft);
        if (curLeft < curRight) {
            l++,curLeft+=a[l];
            if (l == r) break;
            if (curLeft == curRight) ans = max(ans,curLeft);
        } else {
            r--,curRight+=a[r];
            if (l == r) break;
            if (curRight == curLeft) ans = max(ans,curRight);
        }
    }
    if (ans == -inf && ans2 == -inf) cout << 0;
    else cout << max(ans,ans2);
    return 0;
}
