#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,c0=0,c1=0,c2=0; cin >> n;
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            if (cur % 3 == 0) c0++;
            else if (cur % 3 == 1) c1++;
            else c2++;
        }

        int ans =0;
        if (c0 == c1 && c1 == c2) cout << 0 << "\n";
        else {
            while (c0 != c1 || c1 != c2) {
                if (c0 > n/3) {
                    c0--; c1++; ans++;
                } else if (c1 > n/3) {
                    c1--; c2++; ans++;
                } else if (c2 > n/3) {
                    c2--; c0++; ans++;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
