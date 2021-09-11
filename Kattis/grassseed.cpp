#include <bits/stdc++.h>

using namespace std;

signed main() {
    double c; cin >> c;
    int l; cin >> l;
    double ans = 0;
    while (l--) {
        double a,b; cin >> a >> b;
        ans += a*b;
    }
    cout << setprecision(6) << fixed << ans*c;
    return 0;
}
