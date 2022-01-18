#include <bits/stdc++.h>

using namespace std;

#define LSOne(S) ((S) & -(S))
#define ll long long

int n,q;
vector<ll> ft,a,diff;

void update(int idx, int val) {
    while (idx <= n) {
        ft[idx] += val;
        idx += LSOne(idx);
    }
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
    ft.resize(n+1); a.resize(n+1); diff.resize(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        ft[i] += a[i];
        if (i + LSOne(i) <= n) ft[i+LSOne(i)] += ft[i];
    }
    for (int i = 1; i <= q; i++) {
        int op; cin >> op;
        if (op == 1) {
            int idx; ll val; cin >> idx >> val;
            update(idx,val);
        } else {
            int l,r; cin >> l >> r;
            cout << rsq(r) - rsq(l-1) << "\n";
        }
    }
    return 0;   
}
