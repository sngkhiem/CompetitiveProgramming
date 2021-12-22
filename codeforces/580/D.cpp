#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 18;
const int MASK = (1 << N) + 5;
const int INF = 1e9+5;

int f[N][MASK];
int cost[N][N];
int n,m,k;

int len(int mask) {
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if ((mask & (1 << i)) > 0) cnt++;
    return cnt;
}

signed main() {
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    while (k--) {
        int a,b,c;
        cin >> a >> b >> c;
        cost[a-1][b-1] = c;

    }

    //Base case
    for (int i = 0; i < n; i++)
        f[i][1 << i] = a[i];

    //DP Progress
    for (int mask = 1; mask <= (1 << n)-1; mask++) {
        for (int i = 0; i < n; i++) {
            int curMax = -INF;
            if ((mask & (1 << i)) > 0) {
                for (int u = 0; u < n; u++) {
                    if (i == u) continue;

                    if ((mask & (1 << u)) > 0)
                        curMax = max(curMax,f[u][mask ^ (1 << i)]+cost[u][i]+a[i]);
                }
                if (curMax != -INF)
                    f[i][mask] = curMax;
            }
        }
    }

    //Print ans
    int ans = -INF;
    for (int mask = 0; mask < (1 << n); mask++)
        if (len(mask) == m) {
            for (int i = 0; i < n; i++)
                ans = max(ans,f[i][mask]);
        }
    cout << ans;
    return 0;
}
