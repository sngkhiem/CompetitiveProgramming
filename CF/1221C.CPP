#include <bits/stdc++.h>

using namespace std;

const int inf = 1e8;

signed main() {
    int t; cin >> t;
    while (t--) {
        int c,m,x; cin >> c >> m >> x;
        int mn = min(c,m);
        if (x >= mn) cout << mn << "\n";
        else {
            c -= x; m -= x;
            int l = 0, r = inf;
            while (l <= r) {
                int mi = (l+r)/2;
                int tmp1 = c, tmp2 = m;
                tmp1 -= mi; tmp2 -= mi;
                if ((tmp1+tmp2)>=mi && tmp1 >= 0 && tmp2 >= 0) l = mi + 1;
                else r = mi - 1;
            }
            cout << x + l-1 << "\n";
        }
    }
    return 0;
}
