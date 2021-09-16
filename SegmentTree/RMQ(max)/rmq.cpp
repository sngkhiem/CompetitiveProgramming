#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 1005;
const int MIN = -1e9;

int nums[MAXN];
int tree[MAXN * 4];

void buildTree(int id, int l, int r) {
    if (l == r) {
        tree[id] = nums[l];
        return;
    }

    int m = (l + r) / 2;
    buildTree(id * 2,l,m);
    buildTree(id * 2 + 1,m+1,r);
    tree[id] = max(tree[id * 2],tree[id * 2 + 1]);
}

void update(int id, int l, int r, int u, int v, int val) {
    if (u > r || v < l) return;
    if (l == r) {
        tree[id] += val;
        return;
    }

    int m = (l + r) / 2;
    update(id * 2,l,m,u,v,val);
    update(id * 2 + 1,m+1,r,u,v,val);
    tree[id] = max(tree[id * 2],tree[id * 2 + 1]);
}

int get(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return MIN;
    if (l == r) return tree[id];

    int m = (l+r)/2;
    return max(get(id*2,l,m,u,v),get(id*2+1,m+1,r,u,v));
}

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> nums[i];
    buildTree(1,1,n);

    int t; cin >> t;
    while (t--) {
        char q; cin >> q;
        if (q == 'X') {
            int u,v,val; cin >> u >> v >> val;
            update(1,1,n,u,v,val);
        } else {
            int u,v; cin >> u >> v;
            cout << get(1,1,n,u,v) << "\n";
        }
    }
    return 0;
}
