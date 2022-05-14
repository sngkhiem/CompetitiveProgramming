#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;

int t[4*MAXN], a[MAXN];

void build(int v, int tl, int tr) {
    if (tl == tr) t[v] = a[tl];
    else {
        int tm = (tl+tr)/2;
        build(v*2,tl,tm);
        build(v*2+1,tm+1,tr);
        t[v] = t[v*2] ^ t[v*2+1];
    }
}

int sumXor(int v, int tl, int tr, int l, int r) {
    if (l > r) return 0;
    else if (tl == l && tr == r) return t[v];
    else {
        int tm = (tl+tr)/2;
        return sumXor(v*2,tl,tm,l,min(r,tm)) ^ sumXor(v*2+1,tm+1,tr,max(l,tm+1),r);
    }
}

signed main() {
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1,1,n);
    while (q--) {
        int l,r; cin >> l >> r;
        cout << sumXor(1,1,n,l,r) << "\n";
    }
    return 0;
}
