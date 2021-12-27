#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adj[105];
int num[105],low[105],cnt,child,parent[105],ans;

void dfs(int u) {
    num[u] = low[u] = ++cnt;
    for (auto v: adj[u]) {
        if (!num[v]) {
            parent[v] = u;
            dfs(v);
            if (low[v] > num[u]) ans++;
            low[u] = min(low[u],low[v]);
        } else if (v != parent[u]) {
            low[u] = min(low[u],num[v]);
        }
    }
}

signed main() {
    while (cin >> n >> m) {
        if (n == m && n == 0) break;
        for (int i = 0; i < n; i++) adj[i].clear();
        memset(parent,0,sizeof parent);
        memset(num,0,sizeof num);
        memset(low,0,sizeof low);
        cnt = 0; ans = 0;
        for (int i = 0; i < m; i++) {
            int u,v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 0; i < n; i++) {
            if (!num[i]) dfs(i);
        }
        if (ans != 0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
