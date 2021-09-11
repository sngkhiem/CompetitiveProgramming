#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int tmp = n;
    int ans = 0;
    while (n--) {
        int cur; cin >> cur;
        ans += cur;
    }
    cout << ans - tmp + 1;
    return 0;
}
