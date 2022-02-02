#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m;
    while (cin >> n >> m) {
        unordered_set<int> cds;
        if (n == m && m == 0) break;

        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            cds.insert(cur);
        }
        for (int i = 0; i < m; i++) {
            int cur; cin >> cur;
            cds.insert(cur);
        }
        cout << (n+m) - cds.size() << "\n";
    }
    return 0;
}
