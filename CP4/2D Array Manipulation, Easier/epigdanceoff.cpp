#include <bits/stdc++.h>

using namespace std;

char g[2005][2005];

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> g[i][j];
    int ans = 1;
    for (int i = 0; i < m; i++) {
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if (g[j][i] == '$') {
                flag = false;
                break;
            }
        }
        if (flag) ans++;
    }
    cout << ans << "\n";
    return 0;
}
