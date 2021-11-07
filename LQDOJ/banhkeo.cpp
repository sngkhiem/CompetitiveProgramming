/*
    Author: sngkhiem
    Created On: 11/6/2021, 8:25:38 PM
*/

#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define gcd __gcd
#define endl "\n"

typedef long long int ll;
typedef pair<ll,ll> ii;
typedef vector<pair<int,int>> vii;
typedef vector<pair<ll,ll>> vll;

const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

vii adj[1005];
bool vis[1005];
int xe[25];
int cnt;

void bfs(int st) {
    queue<int> q;
    q.push(st);
    vis[st] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (auto v: adj[u]) { 
            if (!vis[v.fi] && xe[0] <= v.se) {
                q.push(v.fi);
                vis[v.fi] = true;
            }
        }
    }
}

signed main() {
    fastIO;
    int n,m,k; cin >> n >> m >> k;
    for (int i = 0; i < k; i++) cin >> xe[i];
    sort(xe,xe+k);
    for (int i = 0,u,v,w; i < m; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for (int i = 1; i <= n; i++) 
        if (!vis[i]) {
            bfs(i);
            cnt++;
        }
    cout << cnt;
    return 0;
}
