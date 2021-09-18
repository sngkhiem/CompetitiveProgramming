#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50005;
const int INF = 1e9;

int h[MAXN], treeMin[MAXN * 4], treeMax[MAXN * 4];

/*void push(int id) {
    tree[id * 2] += lazy[id];
    tree[id * 2 + 1] += lazy[id];

    lazy[id * 2] += lazy[id];
    lazy[id * 2 + 1] += lazy[id];
    lazy[id] = 0;
}*/

void buildTreeMin(int id, int l, int r) {
    if (l == r) {
        treeMin[id] = h[l];
        return;
    }

    int m = (l + r) / 2;
    buildTreeMin(id * 2, l, m);
    buildTreeMin(id * 2 + 1, m + 1, r);
    treeMin[id] = min(treeMin[id * 2], treeMin[id * 2 + 1]);

}

void buildTreeMax(int id, int l, int r) {
    if (l == r) {
        treeMax[id] = h[l];
        return;
    }

    int m = (l + r) / 2;
    buildTreeMax(id * 2, l, m);
    buildTreeMax(id * 2 + 1, m + 1, r);
    treeMax[id] = max(treeMax[id * 2], treeMax[id * 2 + 1]);

}

int getMin(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return INF;

    if (u <= l && v >= r) return treeMin[id];

    //push(id);
    int m = (l + r) / 2;
    return min(getMin(id * 2, l, m, u, v), getMin(id * 2 + 1, m + 1, r, u, v));
}

int getMax(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return -INF;

    if (u <= l && v >= r) return treeMax[id];

    //push(id);
    int m = (l + r) / 2;
    return max(getMax(id * 2, l, m, u, v), getMax(id * 2 + 1, m + 1, r, u, v));
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> h[i];
    buildTreeMin(1,1,n); buildTreeMax(1,1,n);
    while (q--) {
        int a, b; cin >> a >> b;
        cout << abs(getMin(1,1,n,a,b) - getMax(1,1,n,a,b)) << "\n";
    }
    return 0;
}
