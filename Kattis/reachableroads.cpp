#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4+5;

vector<int> adj[MAXN];
bool vis[MAXN];

void dfs(int u) {
    vis[u] = true;
    for (auto v: adj[u])
        if (!vis[v]) dfs(v);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        memset(vis,false,sizeof vis);
        int m,r; cin >> m >> r;
        for (int i = 0; i < r; i++) {
            int u,v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int cnt = 0;
        for (int i = 0; i < m; i++)
            if (!vis[i]) {
                cnt++;
                //cout << i << "\n";
                dfs(i);
            }
        cout << cnt-1 << "\n";
        for (int i = 0; i < m; i++) adj[i].clear();
    }
    return 0;
}
