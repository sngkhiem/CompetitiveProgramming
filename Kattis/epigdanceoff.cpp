#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    char grid[n][m]; int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    for (int i = 0; i < m; i++) {
        bool check = true;
        for (int j = 0; j < n; j++) {
            if (grid[j][i] == '_') continue;
            check = false;
            break;
        }
        if (check) ans++;
    }
    cout << ans+1;
    return 0;
}
