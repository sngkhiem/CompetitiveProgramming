#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int f[30005][20];

signed main() {
    int n; cin >> n;
    int flag = 0;
    int ma = -INF;
    int grid[5][n+1];
    for (int i = 1; i < 5; i++)
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
            ma = max(ma,grid[i][j]);
            if (grid[i][j] > 0) flag = 1;
        }

    if (flag == 0) {
        cout << ma; return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int mask = 0; mask <= 15; mask++) {
            if (((mask & (mask << 1)) == 0) && ((mask & (mask >> 1)) == 0)) {
                int sum = 0;
                for (int j = 0; j < 4; j++)
                    if (( (mask >> j) & 1) == 1) sum += grid[j+1][i];
                for (int newMask = 0; newMask <= 15; newMask++)
                    if (((newMask & (newMask << 1)) == 0) && ((newMask & (newMask >> 1)) == 0))
                        if ((mask & newMask) == 0)
                            f[i][mask] = max(f[i][mask],f[i-1][newMask]+sum);
            }
        }
    }

    int ans = -INF;
    for (int mask = 0; mask <= 15; mask++)
        ans = max(ans,f[n][mask]);
    cout << ans;
    return 0;
}
