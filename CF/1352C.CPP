#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        int cur = 0, expect = k, curDiv = 0;
        while (cur != expect) {
            int prev = k;
            cur = (k - k/n+curDiv);
            expect += (k/n-curDiv);
            prev += prev/n-curDiv;
            curDiv = k/n;
            k = prev;
        }
        cout << cur << "\n";
    }
    return 0;
}
