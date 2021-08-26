#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;


signed main() {
    int t; cin >> t;
    while (t--) {
        int n,ma,mi,cur,ans; cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> cur;
            if (cur == n) ma = i;
            else if (cur == 1) mi = i;
        }

        if (ma > mi) ans = min(ma,min((n-ma+1)+(mi-1+1),n-mi+1));
        else ans = min(mi,min((n-mi+1)+(ma-1+1),n-ma+1));
        cout << ans << "\n";
    }
    return 0;
}
