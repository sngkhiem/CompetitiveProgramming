#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector<int> mark[31];
        int prize[11];
        int d[31];
        int ans = 0;
        memset(d,0,sizeof d);
        memset(prize,0,sizeof prize);
        for (int i = 1; i <= n; i++) {
            int k; cin >> k;
            for (int j = 1; j <= k; j++) {
                int tmp; cin >> tmp;
                mark[i].push_back(tmp);
            }
            int tmp; cin >> tmp;
            prize[i] = tmp;

        }
        for (int i = 1; i <= m; i++) cin >> d[i];
        for (int i = 1; i <= n; i++) {
            int mn = INF;
            for (auto x: mark[i])
                mn = min(mn,d[x]);
            ans += prize[i]*mn;
        }
        for (int i = 1; i <= n; i++) mark[i].clear();
        cout << ans << "\n";
    }
    return 0;
}
