#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3*1e5+5;
const int MIN = -1e9;

int tree[MAXN * 4], lazy[MAXN * 4];

void push(int id) {
    tree[id * 2] += lazy[id];
    lazy[id * 2] += lazy[id];
    tree[id * 2 + 1] += lazy[id];
    lazy[id * 2 + 1] += lazy[id];
    lazy[id] = 0;
}

void update(int id, int l, int r, int u, int v, int val) {
    if (u > r || v < l) return;
    if (u <= l && v >= r) {
        tree[id] += val;
        lazy[id] += val;
        return;
    }

    push(id);
    int m = (l + r) / 2;
    update(id * 2, l, m, u, v, val);
    update(id * 2 + 1, m+1, r, u, v, val);
    tree[id] = max(tree[id * 2],tree[id * 2 + 1]);
}

int getVal(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return MIN;
    if (u <= l && r <= v) return tree[id];

    push(id);
    int m = (l + r) / 2;
    return max(getVal(id*2,l,m,u,v),getVal(id*2+1,m+1,r,u,v));
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin >> n >> m;
    while (m--) {
        int query; cin >> query;
        if (query == 0) {
            int u,v,val; cin >> u >> v >> val;
            update(1,1,n,u,v,val);
        } else {
            int u,v; cin >> u >> v;
            cout << getVal(1,1,n,u,v) << "\n";
        }
    }
    return 0;
}
