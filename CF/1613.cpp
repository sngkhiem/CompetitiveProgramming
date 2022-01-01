#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll inf = 1e18;

int n;
ll k,a[105];

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        ll l = 1, r = inf;
        while (l <= r) {
            ll m = (l+r)/2;
            ll curDame = m;
            for (int i = 0; i < n-1; i++) curDame += min(m,a[i+1]-a[i]);
            if (curDame < k) l = m + 1;
            else r = m - 1;
        }
        cout << r + 1 << "\n";
    }
    return 0;
}
