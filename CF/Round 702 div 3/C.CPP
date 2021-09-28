#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int x; cin >> x;
    for (int i = 1; i <= cbrt(x); i++) {
        int tmp = i*i*i;
        int l = 1, r = cbrt(x)+1;
        while (l <= r) {
            int m = (l+r)/2;
            if (m*m*m+tmp == x) {
                cout << "Yes\n"; return;
            } else if (m*m*m+tmp > x) r = m - 1;
            else l = m + 1;
        }
    }
    cout << "No\n";
    return;
}

signed main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
