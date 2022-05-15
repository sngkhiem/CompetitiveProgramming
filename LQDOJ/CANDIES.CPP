#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5, INF = 1e9;

int t[4*MAXN],n,m,a[MAXN],lazy[4*MAXN];

void build(int v, int tl, int tr) {
    if (tl == tr) t[v] = a[tl];
    else {
        int tm = (tl+tr)/2;
        build(v*2,tl,tm);
        build(v*2+1,tm+1,tr);
        t[v] = max(t[v*2],t[v*2+1]);
    }
}

void push(int v) {
    t[v*2] += lazy[v];
    lazy[v*2] += lazy[v];
    t[v*2+1] += lazy[v];
    lazy[v*2+1] += lazy[v];
    lazy[v] = 0;
}

void update(int v, int tl, int tr, int l, int r, int add) {
    if (l > r) return;
    if (tl == l && tr == r) t[v] += add, lazy[v] += add;
    else {
        push(v);
        int tm = (tl+tr)/2;
        update(v*2,tl,tm,l,min(r,tm),add);
        update(v*2+1,tm+1,tr,max(l,tm+1),r,add);
        t[v] = max(t[v*2],t[v*2+1]);
    }
}

int get_max(int v, int tl, int tr, int l, int r) {
    if (l > r) return -INF;
    if (tl >= l && tr <= r) return t[v];
    push(v);
    int tm = (tl+tr)/2;
    return max(get_max(v*2,tl,tm,l,min(r,tm)),
               get_max(v*2+1,tm+1,tr,max(l,tm+1),r));
}

int bs(int x) {
    int l = 1, r = n, pos = -1;
    while (l <= r) {
        int m = (l+r)/2;
        if (get_max(1,1,n,1,m) >= x) {
            pos = m, r = m - 1;
        } else l = m + 1;
    }
    return pos;
}

signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+1+n);
    build(1,1,n);
    cin >> m;
    while (m--) {
        int x; cin >> x;
        int cur = bs(x);
        if (cur == -1) cout << "0\n";
        else {
            cout << n-cur+1 << "\n";
            update(1,1,n,cur,n,-1);
        }
    }
    return 0;
}
