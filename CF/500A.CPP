#include <bits/stdc++.h>

using namespace std;

vector<int> adj[30005];
bool vis[30005];

void dfs(int u) {
    vis[u] = true;
    for (auto v: adj[u])
        if (!vis[v]) dfs(v);
}

signed main() {
    int n,t; cin >> n >> t;
    for (int i = 1; i < n; i++) {
        int tmp; cin >> tmp;
        adj[i].push_back(i+tmp);
    }
    dfs(1);
    cout << (vis[t] ? "YES" : "NO");
    return 0;
}
