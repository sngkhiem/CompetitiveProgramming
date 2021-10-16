#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 105;
const int INF = 1e18;

int adj[MAXN][MAXN];
int n,m,q;

signed main() {
    cin >> n >> m;
    for (int i = 1; i < MAXN; i++) {
        for (int j = 1; j < MAXN; j++)
            adj[i][j] = INF;
        adj[i][i] = 0;
    }
    for (int i = 0,u,v,w; i < m; i++) {
        cin >> u >> v >> w;
        adj[u][v] = w;
    }
    for (int u = 1; u <= n; u++)
        for (int v = 1; v <= n; v++)
            for (int k = 1; k <= n; k++)
                adj[u][v] = min(adj[u][v],adj[u][k]+adj[k][v]);

    cin >> q;
    while (q--) {
        int u,v; cin >> u >> v;
        if (adj[u][v] == INF) cout << "-1\n";
        else cout << adj[u][v] << "\n";
    }
}
