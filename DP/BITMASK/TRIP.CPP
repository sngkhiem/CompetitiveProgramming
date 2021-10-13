#include <bits/stdc++.h>

using namespace std;

const int MASK = 70000;
const int N = 16;
const int INF = 1e9;

int f[N][MASK];

signed main() {
    //Read input
    int n; cin >> n;
    int cost[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> cost[i][j];

    //Init DP array
    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 70000; j++)
            f[i][j] = INF;

    //Base case
    for (int i = 0; i < n; i++)
        f[i][1 << i] = 0;

    //DP Progress
    for (int mask = 1; mask <= (1 << n) - 1; mask++) {
        for (int i = 0; i < n; i++) {
            if (f[i][mask] != INF) continue;
            int curMin = INF;
            if ((mask & (1 << i)) > 0) {
                for (int u = 0; u < n; u++) {
                    if (i == u) continue;

                    if ((mask & (1 << u)) > 0) {
                        curMin = min(curMin,f[u][mask ^ (1 << i)] + cost[u][i]);
                    }
                }
                if (curMin != INF)
                    f[i][mask] = curMin;
            }
        }
    }

    //Print ans
    int ans = INF;
    for (int i = 0; i < n; i++)
        ans = min(ans,f[i][(1 << n) - 1]);
    cout << ans;
    return 0;
}
