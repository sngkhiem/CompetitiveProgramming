#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
const int MAXN = 1e5+5;

int Parent[MAXN],Rank[MAXN],setSize[MAXN];
long long factor[MAXN];

int findSet(int i) {
    if (setSize[i] < 0) return i;
    return setSize[i] = findSet(setSize[i]);
}

void unionSets(int x, int y) {
    x = findSet(x); y = findSet(y);
    if (x == y) return;
    if (setSize[x] > setSize[y]) swap(x,y);
    setSize[x] += y;
    setSize[y] = x;
}

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        setSize[i] = -1;
    }
    for (int i = 0; i < m; i++) {
        int u,v; cin >> u >> v;
        unionSets(u,v);
    }

    factor[0] = 1;
    for (int i = 1; i <= n; i++) factor[i] = ((factor[i-1]%MOD) * (i%MOD))%MOD;

    long long ans = 0;
    for (int i = 0; i < n; i++)
        if (setSize[i] < -2) ans += factor[-setSize[i]];
    cout << ans;
    return 0;
}
