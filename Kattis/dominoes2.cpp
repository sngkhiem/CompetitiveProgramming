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
        int n,m,l;
        cin >> n >> m >> l;
        int start = 1;
        for (int i = 0; i < m; i++) {
            int u,v; cin >> u >> v;
            adj[u].push_back(v);
        }
        for (int i = 0; i < l; i++) {
            int cur; cin >> cur;
            if (!vis[cur]) dfs(cur);
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            if (vis[i]) cnt++;
        cout << cnt << "\n";
        for (int i = 1; i <= n; i++) adj[i].clear();
    }

    return 0;
}
