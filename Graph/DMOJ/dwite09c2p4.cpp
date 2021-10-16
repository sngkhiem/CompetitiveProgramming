#include <bits/stdc++.h>

using namespace std;

vector<int> adj[55];
bool vis[55]; int d[55];
pair<int,int> mem[55];
int n;

void bfs(int src) {
    queue<int> q;
    q.push(src); vis[src] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (auto v: adj[u])
            if (!vis[v]) {
                d[v] = d[u]+1;
                vis[v] = true;
                q.push(v);
            }
    }
}

signed main() {
    int t = 5;
    while (t--) {
        memset(vis,false,sizeof vis);
        memset(d,0,sizeof d);
        memset(mem,0,sizeof mem);
        int cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> mem[i].first >> mem[i].second;
            adj[mem[i].first].push_back(mem[i].second);
            adj[mem[i].second].push_back(mem[i].first);
        }
        bfs(1);
        for (int i = 0; i < n; i++)
            if (d[mem[i].first] == d[mem[i].second]) cnt++;
        cout << cnt << "\n";
        for (int i = 0; i < 55; i++) adj[i].clear();
    }
    return 0;
}
