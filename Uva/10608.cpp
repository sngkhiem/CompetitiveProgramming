/*
    Author: sngkhiem
    Created On: 10/26/2021, 6:45:11 PM
    :( Code mãi nhưng vẫn gà
*/

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define fi first
#define se second
#define vii vector<pair<int,int>>
#define vi vector<int>
#define gcd __gcd

const int INF = 1e9;
const ll MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};
const int MAXN = 3e4+5;

int n,m,tmp;
vector<int> adj[MAXN];
bool vis[MAXN];

void dfs(int u) {
    vis[u] = true;
    tmp++;
    for (auto v: adj[u])
        if (!vis[v]) dfs(v);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(vis,false,sizeof vis);
        while (m--) {
            int u,v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans = -INF;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                tmp = 0;
                dfs(i);
                ans = max(ans,tmp);
            }
        }
        cout << ans << "\n";
        for (int i = 1; i <= n; i++) adj[i].clear();
    }
    return 0;
}
