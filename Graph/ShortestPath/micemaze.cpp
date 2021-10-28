/*
    Author: sngkhiem
    Created On: 10/28/2021, 7:46:55 PM
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
const int mxn = 105;

vii adj[mxn];
int d[mxn];

void dijkstra(int st) {
    for (int i = 0; i < mxn; i++) d[i] = INF;
    priority_queue<ii,vii,greater<ii>> pq;
    pq.push({0,st}); d[st] = 0;
    while (!pq.empty()) {
        int u = pq.top().se; int du = pq.top().fi;
        pq.pop();
        if (d[u] != du) continue;
        for (auto tmp: adj[u]) {
            int v = tmp.fi; int dv = tmp.se;
            if (d[v] > du+dv) {
                d[v] = du+dv;
                pq.push({d[v],v});
            }
        }
    }
}

signed main() {
    fastIO;
    int n; cin >> n;
    int destination; cin >> destination;
    int time; cin >> time;
    int m; cin >> m;
    for (int i = 0,u,v,w; i < m; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        dijkstra(i);
        if (d[destination] <= time) ans++;
    }
    cout << ans;
    return 0;
}
