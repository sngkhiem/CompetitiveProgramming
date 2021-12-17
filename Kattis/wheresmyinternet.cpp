#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;

vector<int> adj[MAXN];
bool vis[MAXN];

void dfs(int u) {
    vis[u] = true;
    for (auto v: adj[u])
        if (!vis[v]) dfs(v);
}

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    dfs(1);
    int flag = 0;
    for (int i = 1; i <= n; i++)
        if (!vis[i]) {
            cout << i << "\n";
            flag = 1;
        }
    if (flag == 0) cout << "Connected";
    return 0;
}
