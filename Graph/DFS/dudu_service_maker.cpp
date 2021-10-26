#include <bits/stdc++.h>

using namespace std;

bool circle;
vector<int> adj[10005];
bool vis[10005],in[10005];

void dfs(int u) {
    vis[u] = true;
    in[u] = true;
    for (int v = 0; v < (int)adj[u].size(); v++) {
        if (in[adj[u][v]]) circle = true;
        if (!vis[adj[u][v]]) dfs(adj[u][v]);
    }
    in[u] = false;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        memset(vis,false,sizeof vis);
        memset(in,false,sizeof in);
        for (int i = 0,u,v; i < m; i++) {
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
        }
        circle = false;
        for (int i = 0; i < n; i++)
            if (!vis[i]) dfs(i);
        cout << (circle == true ? "SIM\n" : "NAO\n");
        for (int i = 0; i < n; i++) adj[i].clear();
    }
    return 0;
}
