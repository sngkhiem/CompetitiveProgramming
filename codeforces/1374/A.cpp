#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int x,y,k;
        cin >> x >> y >> k;
        if (k % x == y) cout << k << endl;
        else if (k % x < y) cout << k - k % x - (x - y) << endl;
        else cout << k - (k % x - y) << endl;
    }
    return 0;
}
