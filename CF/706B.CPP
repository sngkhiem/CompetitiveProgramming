#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    vector<int> shops; shops.resize(n+1);
    shops[0] = 0;
    for (int i = 1; i <= n; i++) cin >> shops[i];
    sort(shops.begin(),shops.end());
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int cur; cin >> cur;
        int lo = 1, hi = n;
        while (lo <= hi) {
            int mi = (lo+hi)/2;
            if (shops[mi] <= cur) lo = mi + 1;
            else hi = mi - 1;
        }
        cout << lo - 1 << "\n";
    }
    return 0;
}
