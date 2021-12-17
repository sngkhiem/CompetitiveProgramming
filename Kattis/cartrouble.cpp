#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3+5;
const int INF = 1e9;

vector<int> adj[MAXN],id;
bool vis[MAXN],vis2[MAXN];
int order[MAXN];

void dfs(int u) {
    vis[u] = true;
    for (auto v: adj[u])
        if (!vis[v]) dfs(v);
}

void bfs(int u) {
    queue<int> q; q.push(u); vis2[u] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (auto v: adj[u])
            if (!vis2[v]) {
                vis2[v] = true; q.push(v);
            }
    }
}

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int u,tmp; cin >> u >> tmp;
        if (u != 0) id.push_back(u);
        for (int j = 0; j < tmp; j++) {
            int v; cin >> v;
            adj[u].push_back(v);
        }
    }
    bool flag = true;
    dfs(0);
    for (auto x: id) {
        memset(vis2,false,sizeof vis2);
        bfs(x);
        if (!vis2[0]) {
            cout << "TRAPPED " << x << "\n";
            flag = false;
        }

    }
    for (auto x: id)
        if (!vis[x]) {
            flag = false;
            cout << "UNREACHABLE " << x << "\n";
        }
    if (flag) cout << "NO PROBLEMS";
    return 0;
}
