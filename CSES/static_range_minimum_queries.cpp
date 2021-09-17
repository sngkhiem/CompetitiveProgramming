#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2*1e5+5;
const int INF = 1e9;

int nums[MAXN], tree[MAXN * 4], lazy[MAXN * 4];

void buildTree(int id, int l, int r) {
    if (l == r) {
        tree[id] = nums[l];
        return;
    }
    int m = (l + r) / 2;
    buildTree(id*2,l,m);
    buildTree(id*2+1,m+1,r);
    tree[id] = min(tree[id*2],tree[id*2+1]);
}

void push(int id) {
    int tmp = lazy[id];
    tree[id*2] += tmp;
    tree[id*2+1] += tmp;
    lazy[id*2] += tmp;
    lazy[id*2+1] += tmp;
    lazy[id] = 0;
}

int get(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return INF;
    if (u <= l && r <= v) return tree[id];

    push(id);
    int m = (l + r) / 2;
    return min(get(id*2,l,m,u,v),get(id*2+1,m+1,r,u,v));
}

signed main() {
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> nums[i];
    buildTree(1,1,n);
    while (q--) {
        int a,b; cin >> a >> b;
        cout << get(1,1,n,a,b) << "\n";
    }
    return 0;
}
