#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

const int MAX = 2e5+5;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int diff = 0;
        int mx = -MAX;
        vector<int> d;
        int n; cin >> n;
        d.resize(n+1);
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            if (!d[tmp]) diff++;
            d[tmp]++;
            mx = max(mx,d[tmp]);
        }
        cout << max(min(diff,mx-1),min(diff-1,mx)) << "\n";
    }
    return 0;
}
