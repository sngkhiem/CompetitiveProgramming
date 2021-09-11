#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define X first
#define Y second

const int INF = 1e18;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};
const int MOD = 1e9+7;
const int N = 1e5+5;

int cnt,n,m;
vector<int> g[N];
bool vis[N];

void dfs(int src) {
    vis[src] = true;
    for (auto x: g[src])
        if (!vis[x]) dfs(x);
}


signed main() {
    fastIO;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        g[u].push_back(v);
    }

    for (int i = 1; i <= n; i++) 
        if (!vis[i]) {
            dfs(i); cnt++;
        }
    cout << cnt;
    return 0;
}