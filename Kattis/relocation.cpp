#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;

int a[MAXN];

signed main() {
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];

    while (q--) {
        int k; cin >> k;
        if (k == 1) {
            int c,d; cin >> c >> d;
            a[c] = d;
        } else {
            int c,d; cin >> c >> d;
            cout << abs(a[c]-a[d]) << "\n";
        }
    }
    return 0;
}
