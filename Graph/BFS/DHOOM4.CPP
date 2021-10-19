#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 1e5+5;
const int MOD = 1e5;

int vis[MAXN];
int d[MAXN];
int n;
int keys[1005];

void bfs(int u) {
    queue<int> q;
    q.push(u); vis[u] = true;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for (int i = 0; i < n; i++)
            if (!vis[((u % MOD) * (keys[i] % MOD) % MOD)]) {
                q.push(((u % MOD) * (keys[i] % MOD) % MOD));
                vis[((u % MOD) * (keys[i] % MOD) % MOD)] = true;
                d[((u % MOD) * (keys[i] % MOD) % MOD)] = d[u]+1;
            }
    }
}

signed main() {
    int src,ans; cin >> src >> ans;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> keys[i];
    bfs(src);
    if (!vis[ans]) cout << -1;
    else cout << d[ans];
    return 0;
}
