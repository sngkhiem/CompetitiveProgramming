#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4+5;

vector<int> adj[MAXN];
int num[MAXN],low[MAXN],parent[MAXN],cnt;
bool vis[MAXN];
set<pair<int,int>> ls;

void dfs1(int u) {
    num[u] = low[u] = ++cnt;
    for (auto v: adj[u]) {
        if (!num[v]) {
            parent[v] = u;
            dfs1(v);
            if (low[v] > num[u]) {
                ls.insert({v,u});
                ls.insert({u,v});
            }
            low[u] = min(low[u],low[v]);
        } else if (v != parent[u]) {
            low[u] = min(low[u],num[v]);
        }
    }
}

int dfs2(int u) {
    vis[u] = true;
    int total = 1;
    for (auto v: adj[u]) {
        if (vis[v]) continue;
        if (ls.count({u,v}) || ls.count({v,u})) continue;
        total += dfs2(v);
    }
    return total;
}

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs1(0);
    cout << dfs2(0);
    return 0;
}
