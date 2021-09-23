#include <bits/stdc++.h>

using namespace std;

signed main() {
    double x; cin >> x;
    int ans = 1000.0 * ( 5280.0 / 4854.0 ) * x + 0.5;
    cout << ans;
    return 0;
}
