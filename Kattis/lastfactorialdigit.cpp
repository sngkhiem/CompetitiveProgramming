#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int cur; cin >> cur;
        int ans = 1;
        for (int i = 2; i <= cur; i++) ans = ans * i % 10;
        cout << ans << "\n";
    }
    return 0;
}
