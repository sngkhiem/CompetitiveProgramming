#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a1,a2,b1,b2,c1,c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        int ans = abs(a1-b1)+abs(a2-b2);
        if (a1 == b1 && a1 == c1 && min(a2,b2) < c2 && max(a2,b2) > c2
            || a2 == b2 && a2 == c2 && min(a1,b1) < c1 && max(a1,b1) > c1)
            ans+= 2;
        cout << ans << "\n";
    }
    return 0;
}
