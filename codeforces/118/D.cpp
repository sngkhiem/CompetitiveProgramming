#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;
const int MOD = 1e8;

int n1,n2,k1,k2;
int f[105][105][2][15];

signed main() {
    fastIO;
    cin >> n1 >> n2 >> k1 >> k2;

    // Base case
    for (int i = 1; i <= min(k1,n1); i++) f[i][0][0][i] = 1;
    for (int i = 1; i <= min(k2,n2); i++) f[0][i][1][i] = 1;

    // DP
    for (int i = 1; i <= n1; i++)
        for (int j = 1; j <= n2; j++)
            for (int type = 0; type <= 1; type++) {
                if (type == 0) {
                    for (int q = 1; q <= min(k1,n1); q++) {
                        int cur = 0;
                        for (int x = 1; x <= min(j,k2); x++)
                            cur = (cur % MOD + f[i-q][j][1][x] % MOD) % MOD;
                        f[i][j][0][q] = (f[i][j][0][q] % MOD + cur %  MOD) % MOD;
                    }
                } else {
                    for (int q = 1; q <= min(k2,n2); q++) {
                        int cur = 0;
                        for (int x = 1; x <= min(i,k1); x++)
                            cur = (cur % MOD + f[i][j-q][0][x] % MOD) % MOD;
                        f[i][j][1][q] = (f[i][j][1][q] % MOD + cur % MOD) % MOD;
                    }
                }
            }

    // Ans
    int ans = 0;
    for (int i = 1; i <= k1; i++) ans = (ans % MOD + f[n1][n2][0][i] % MOD) % MOD;
    for (int i = 1; i <= k2; i++) ans = (ans % MOD + f[n1][n2][1][i] % MOD) % MOD;
    cout << ans;
    return 0;
}
