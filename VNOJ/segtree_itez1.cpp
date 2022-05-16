#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5, INF = 1e9;

int t[4*MAXN], a[MAXN];
void build(int v, int tl, int tr) {
    if (tl == tr) t[v] = a[tl];
    else {
        int tm = (tl+tr)/2;
        build(v*2,tl,tm);
        build(v*2+1,tm+1,tr);
        t[v] = max(t[v*2],t[v*2+1]);
    }
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) t[v] = new_val;
    else {
        int tm = (tl+tr)/2;
        if (pos <= tm) update(v*2,tl,tm,pos,new_val);
        else update(v*2+1,tm+1,tr,pos,new_val);
        t[v] = max(t[v*2],t[v*2+1]);
    }
}

int get(int v, int tl, int tr, int l, int r) {
    if (l>r) return -INF;
    if (tl == l && tr == r) return t[v];
    int tm =(tl+tr)/2;
    return max(get(v*2,tl,tm,l,min(r,tm)),
               get(v*2+1,tm+1,tr,max(l,tm+1),r));
}

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1,1,n);
    int q; cin >> q;
    while (q--) {
        int op; cin >> op;
        if (op == 1) {
            int x,y; cin >> x >> y;
            update(1,1,n,x,y);
        } else {
            int l,r; cin >> l >> r;
            cout << get(1,1,n,l,r) << "\n";
        }
    }
    return 0;
}
