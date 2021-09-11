#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;
const int N = 1e5+5;

int n,m,idx;
vector<int> g[N], ans[N];
bool vis[N];

void dfs(int src, int idx) {
    vis[src] = true;
    ans[idx].push_back(src);
    for (auto x: g[src]) 
        if (!vis[x]) dfs(x,idx);
}

signed main() {
    fastIO;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) 
        if (!vis[i]) {
            dfs(i,idx); idx++;
        }
    cout << idx << "\n";
    for (int i = 0; i < idx; i++) {
        cout << ans[i].size() << " ";
        for (auto x: ans[i]) cout << x << " ";
        cout << "\n";
    }
    return 0;
}