#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 2e5+5;

int t[4*MAXN],a[MAXN];

void build(int v, int tl, int tr) {
    if (tl == tr) t[v] = a[tl];
    else {
        int tm = (tl+tr)/2;
        build(v*2,tl,tm);
        build(v*2+1,tm+1,tr);
        t[v] = 0;
    }
}

void update(int v, int tl, int tr, int l, int r, int add) {
    if (l>r) return;
    if (l == tl && r == tr) t[v] += add;
    else {
        int tm = (tl+tr)/2;
        update(v*2,tl,tm,l,min(r,tm),add);
        update(v*2+1,tm+1,tr,max(l,tm+1),r,add);
    }
}

int get(int v, int tl, int tr, int pos) {
    if (tl == tr) return t[v];
    int tm = (tl+tr)/2;
    if (pos <= tm) return t[v] + get(v*2,tl,tm,pos);
    else return t[v] + get(v*2+1,tm+1,tr,pos);
}

signed main() {
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1,1,n);
    while (q--) {
        int k; cin >> k;
        if (k == 1) {
            int l,r,val; cin >> l >> r >> val;
            update(1,1,n,l,r,val);
        } else {
            int pos; cin >> pos;
            cout << get(1,1,n,pos) << "\n";
        }
    }
    return 0;
}
