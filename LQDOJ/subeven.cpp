#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        char c; cin >> c;
        if ((c - '0') % 2 == 0) ans += i;
    }
    cout << ans;
    return 0;
}
