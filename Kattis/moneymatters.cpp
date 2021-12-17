#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10005;

bool vis[MAXN];
int cost[MAXN];
vector<int> adj[MAXN];

int bfs(int u) {
    queue<int> q; q.push(u); vis[u] = true;
    int ans = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        ans += cost[u];
        for (auto v: adj[u])
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
    }
    return ans;
}

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur; cost[i] = cur;
    }
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (bfs(i) != 0) {
                cout << "IMPOSSIBLE";
                return 0;
            }
        }
    }
    cout << "POSSIBLE";
    return 0;
}
