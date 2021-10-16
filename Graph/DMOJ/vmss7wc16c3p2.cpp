#include <bits/stdc++.h>

using namespace std;

vector<int> adj[2005];
bool vis[2005];

void dfs(int u) {
    vis[u] = true;
    for (auto v: adj[u])
        if (!vis[v]) dfs(v);
}

signed main() {
    int n,m,a,b; cin >> n >> m >> a >> b;
    for (int i = 0,u,v; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(a);
    if (vis[b]) cout << "GO SHAHIR!";
    else cout << "NO SHAHIR!";
    return 0;
}
