#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;
const int INF = 1e9;

vector<int> adj[MAXN];
int color[MAXN];
pair<int,int> query[MAXN];

void bfs(int u) {
    queue<int> q; q.push(u);
    color[u] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (auto v: adj[u]) {
            if (color[v] == INF) {
                color[v] = 1 - color[u];
                q.push(v);
            }
        }
    }
}

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) color[i] = INF;
    for (int i = 1; i < n; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
        query[i] = {u,v};
    }
    bfs(1);
    for (int i = 1; i < n; i++)
        if (color[query[i].first] == 0 && color[query[i].second] == 1) cout << "0\n";
        else cout << "1\n";
    return 0;
}
