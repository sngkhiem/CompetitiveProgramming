#include <bits/stdc++.h>

using namespace std;

const double INF = 1e9;

signed main() {
    int n,m;
    while (cin >> n >> m) {
        if (n == m && n == 0) break;
        double a,b; int ans1,ans2;
        double best = INF;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            double tmp = b/a;
            if (a <= m && best > tmp) {
                best = tmp;
                ans1 = a;
                ans2 = b;
            } else if (a <= m && best == tmp && a > ans1) {
                best = tmp;
                ans1 = a;
                ans2 = b;
            }
        }
        if (best != INF) cout << "Buy " << ans1 << " tickets for $" << ans2 << "\n";
        else cout << "No suitable tickets offered\n";
    }
    return 0;
}
