#include <bits/stdc++.h>
 
using namespace std;
 
#define LSOne(S) ((S) & -(S))
#define ll long long
 
int n,q;
vector<ll> ft,a;
 
void update(int idx, ll val) {
    while (idx <= n) {
        ft[idx] += val;
        idx += LSOne(idx);
    }
}
 
void RangePointUpdate(int l, int r, ll val) {
    update(l,val);
    update(r+1,-val);
}
 
ll rsq(int idx) {
    ll ans = 0;
    while (idx > 0) {
        ans += ft[idx];
        idx -= LSOne(idx);
    }
    return ans;
}
 
signed main() {
    cin >> n >> q;
    ft.resize(n+1); a.resize(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = n; i >= 1; i--) a[i] -= a[i-1];
    for (int i = 1; i <= n; i++) update(i,a[i]);
    for (int i = 1; i <= q; i++) {
        int op; cin >> op;
        if (op == 1) {
            int l,r; ll val; cin >> l >> r >> val;
            RangePointUpdate(l,r,val);
        } else {
            int k; cin >> k; cout << rsq(k)<< "\n";
        }
    }
    retu