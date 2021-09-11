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

int n,m,s,idx;
vector <int> g[N];
bool vis[N];
pair <int,int> d[N];

void bfs(int src) {
    queue<int> q;
    q.push(src); vis[src] = true; d[src] = {0,src};
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (auto v: g[u]) 
            if (!vis[v]) {
                vis[v] = true; q.push(v); 
                d[v] = {d[u].X+1,v};
            }
    }
}

signed main() {
    fastIO;
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u);
    }
    bfs(s);
    sort(d+1,d+1+n);
    for (int i = 1; i <= n+1; i++) if (vis[d[i].Y]) cout << d[i].Y << " " << d[i].X << "\n";
    return 0;
}