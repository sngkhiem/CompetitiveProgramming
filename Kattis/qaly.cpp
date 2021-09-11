#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    double ans = 0;
    while (n--) {
        double q,y; cin >> q >> y;
        ans += (q*y);
    }
    cout << setprecision(3) << fixed << ans;
    return 0;
}
