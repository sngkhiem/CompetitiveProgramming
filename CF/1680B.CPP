#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        char g[n][m];
        vector<pair<int,int>> pos;
        int idx = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                cin >> g[i][j];
                if (g[i][j] == 'R') pos.push_back({i,j});
            }
        string ans = "NO\n";
        bool flag;
        for (int i = 0; i < pos.size(); i++) {
            int x = pos[i].first - 1, y = pos[i].second - 1;
            flag = false;
            for (int j = 0; j < pos.size(); j++) {
                if (i != j) {
                    if (pos[j].first - x <= 0 || pos[j].second - y <= 0) {
                        flag = true;
                        break;
                    }
                }
            }
            if (!flag) {
                ans = "YES\n"; break;
            }
        }
        cout << ans;
        pos.clear();
    }
    return 0;
}
