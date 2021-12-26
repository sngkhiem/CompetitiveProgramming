#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+5;

vector<int> adj[MAXN];
int vertices[MAXN],indeg[MAXN],par[MAXN];
bool check = false,vis[MAXN];
int n,m;
vector<int> ans;

void cycleCheck(int u) {
    vertices[u] = 2;
    for (auto v: adj[u]) {
        if (vertices[v] == 0) {
            par[v] = u;
            cycleCheck(v);
        } else if (vertices[v] == 2) {
            if (v != par[u])
                check = true;
        }
    }
    vertices[u] = 1;
}

void topoSort(int u) {
    vis[u] = true;
    for (auto v: adj[u])
        if (!vis[v]) topoSort(v);
    ans.push_back(u);
}

signed main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    for (int i = 1; i <= n; i++)
        if (vertices[i] == 0) cycleCheck(i);
    if (check) cout << "IMPOSSIBLE";
    else {
        for (int i = 1; i <= n; i++)
            if (!vis[i]) topoSort(i);
        reverse(ans.begin(),ans.end());
        for (auto v: ans) cout << v << "\n";
    }
    return 0;
}
