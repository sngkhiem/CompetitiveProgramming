#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5, INF = 1e9+5;

int t[4*MAXN],a[MAXN];

void build(int v, int tl, int tr) {
    if (tl == tr) t[v] = a[tl];
    else {
        int tm = (tl+tr)/2;
        build(v*2,tl,tm);
        build(v*2+1,tm+1,tr);
        t[v] = min(t[v*2],t[v*2+1]);
    }
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl==tr) t[v] = new_val;
    else {
        int tm = (tl+tr)/2;
        if (pos <= tm) update(v*2,tl,tm,pos,new_val);
        else update(v*2+1,tm+1,tr,pos,new_val);
        t[v] = min(t[v*2],t[v*2+1]);
    }
}

int get(int v, int tl, int tr, int l, int r) {
    if (l > r) return INF;
    if (tl == l && tr == r) return t[v];
    int tm = (tl+tr)/2;
    return min(get(v*2,tl,tm,l,min(r,tm)),
               get(v*2+1,tm+1,tr,max(l,tm+1),r));
}

signed main() {
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1,1,n);
    while (q--) {
        int k; cin >> k;
        if (k==1) {
            int pos,val; cin >> pos >> val;
            update(1,1,n,pos,val);
        } else {
            int l,r; cin >> l >> r;
            cout << get(1,1,n,l,r) << "\n";
        }
    }
    return 0;
}
