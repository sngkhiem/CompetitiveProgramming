#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 1e5+5;

int t[4*MAXN];

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) t[v] = new_val;
    else {
        int tm = (tl+tr)/2;
        if (pos <= tm) update(v*2,tl,tm,pos,new_val);
        else update(v*2+1,tm+1,tr,pos,new_val);
        t[v] = t[v*2]+t[v*2+1];
    }
}

int get(int v, int tl, int tr, int l, int r) {
    if (l > r) return 0;
    if (tl == l && tr == r) return t[v];
    int tm = (tl+tr)/2;
    return get(v*2,tl,tm,l,min(tm,r)) + get(v*2+1,tm+1,tr,max(l,tm+1),r);
}

signed main() {
    int n,q; cin >> n >> q;
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
