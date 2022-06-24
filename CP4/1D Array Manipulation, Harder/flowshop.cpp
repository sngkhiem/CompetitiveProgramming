#include <bits/stdc++.h>

using namespace std;

int g[1005][1005];

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) 
            cin >> g[i][j];
        g[i][1] += g[i-1][1];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            g[i][j] += max(g[i-1][j],g[i][j-1]);
        }
    }
    for (int i = 1; i <= n; i++) cout << g[i][m] << " ";
    return 0;
}
