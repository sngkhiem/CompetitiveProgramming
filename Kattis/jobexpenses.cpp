#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        if (cur < 0) ans += abs(cur);
    }
    cout << ans;
    return 0;
}
