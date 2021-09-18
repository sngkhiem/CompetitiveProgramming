#include <bits/stdc++.h>

using namespace std;

const int MAXN = 300005;
const int MIN = -1e9;

int tree[4 * MAXN], lazy[4 * MAXN];

void down(int id) {
    tree[id * 2] += lazy[id];
    lazy[id * 2] += lazy[id];
    tree[id * 2 + 1] += lazy[id];
    lazy[id * 2 + 1] += lazy[id];
    lazy[id] = 0;
}

void update(int id, int l, int r, int u, int v, int val) {
    if (v < l || u > r) return;
    if (l >= u && r <= v) {
        tree[id] += val;
        lazy[id] += val;
        return;
    }
    down(id);
    int m = (l + r) / 2;
    update(id * 2, l, m, u, v, val);
    update(id * 2 + 1, m + 1, r, u, v, val);
    tree[id] = max(tree[id * 2],tree[id * 2 + 1]);

}

int get(int id, int l, int r, int u, int v) {
    if (v < l || u > r) return MIN;
    if (u <= l && r <= v) return tree[id];
    down(id);
    int m = (l + r) / 2;
    return max(get(id * 2, l, m, u, v),get(id * 2 + 1, m + 1, r, u, v));
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u,v,val; cin >> u >> v >> val;
        update(1,1,n,u,v,val);
    }
    int p; cin >> p;
    for (int i = 1; i <= p; i++) {
        int u,v; cin >> u >> v;
        cout << get(1,1,n,u,v) << "\n";
    }
    return 0;
}
