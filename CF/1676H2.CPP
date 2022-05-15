#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 2e5+5;

int t[4*MAXN];

void update(int v, int tl, int tr, int pos, int add) {
    if (tl == tr) t[v] += add;
    else {
        int tm = (tl+tr)/2;
        if (pos <= tm) update(v*2,tl,tm,pos,add);
        else update(v*2+1,tm+1,tr,pos,add);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l>r) return 0;
    if (tl == l && tr == r) return t[v];
    int tm = (tl+tr)/2;
    return sum(v*2,tl,tm,l,min(r,tm)) + sum(v*2+1,tm+1,tr,max(l,tm+1),r);
}

signed main() {
    int nT; cin >> nT;
    while (nT--) {
        int n; cin >> n;
        int ans = 0;
        memset(t,0,sizeof t);
        while (n--) {
            int cur; cin >> cur;
            ans += sum(1,1,MAXN,cur,MAXN);
            update(1,1,MAXN,cur,1);
        }
        cout << ans << "\n";
    }
    return 0;
}
