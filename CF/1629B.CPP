#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int l,r,k; cin >> l >> r >> k;
        int le = 0;
        if (l == r && l == 1) cout << "NO\n";
        else if (l == r && l != 1) cout << "YES\n";
        else {
            if (r&1) le = (r-l) / 2 + 1;
            else {
                if (l&1) le = (r-l)/2+1;
                else le = (r-l)/2;
            }
        
            if (k >= le) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
