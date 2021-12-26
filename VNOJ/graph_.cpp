#include <bits/stdc++.h>

using namespace std;

vector<int> adj[10005];
int low[10005],num[10005],parent[10005],child,cnt,root;
int articulations,bridges;
bool mark[10005];

void dfs(int u) {
    num[u] = low[u] = ++cnt;
    for (auto v: adj[u]) {
        if (!num[v]) {
            parent[v] = u;
            if (u == root) child++;
            dfs(v);
            if (low[v] >= num[u]) mark[u] = true;
            if (low[v] > num[u]) bridges++;
            low[u] = min(low[u],low[v]);
        } else if (v != parent[u]) low[u] = min(low[u],num[v]);
    }
}

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        if (num[i] == 0) {
            child = 0; root = i;
            dfs(i);
            mark[i] = (child > 1);
        }
    for (int i = 1; i <= n; i++)
        if (mark[i]) articulations++;
    cout << articulations << " " << bridges;
    return 0;
}
