#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3e5+5;

int t[4*MAXN], n, m, ans[MAXN], l, r, x;

void update(int v, int x, int tl, int tr, int l, int r) {
    if (r < tl || l > tr || t[v] != 0) return;
    if (tl >= l && tr <= r && (x < tl || x > tr)) {
        t[v] = x;
        return;
    }
    if (tl == tr) return;
    int tm = (tl+tr)/2;
    update(v*2,x,tl,tm,l,r);
    update(v*2+1,x,tm+1,tr,l,r);
}

void process(int v, int tl, int tr, int w) {
    if (t[v] != 0) w = t[v];
    if (tl == tr) {
        ans[tl] = w;
        return;
    }
    int tm = (tl+tr)/2;
    process(v*2,tl,tm,w);
    process(v*2+1,tm+1,tr,w);
}

signed main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> l >> r >> x;
        update(1,x,1,n,l,r);
    }
    process(1,1,n,0);
    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
    return 0;
}
