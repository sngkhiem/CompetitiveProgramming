#include <bits/stdc++.h>

using namespace std;

vector<int> adj[10005];
int num[10005],low[10005],cnt,ans;
bool vis[10005];
stack<int> st;

void tarjan(int u) {
    num[u] = low[u] = ++cnt;
    vis[u] = true; st.push(u);
    for (auto v: adj[u]) {
        if (!num[v]) tarjan(v);
        if (vis[v]) low[u] = min(low[u],low[v]);
    }
    if (low[u] == num[u]) {
        ans++;
        while (1) {
            int v = st.top(); st.pop();
            vis[v] = false;
            if (v == u) break;
        }
    }
}

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++)
        if (!num[i]) tarjan(i);
    cout << ans;
    return 0;
}
