#include <bits/stdc++.h>

using namespace std;

#define LSOne(S) ((S) & -(S))
#define ll long long

int n,q;
vector<ll> ft1,ft2,a;

void update(vector<ll> &ft, int idx, ll val) {
    while (idx <= n) {
        ft[idx] += val;
        idx += LSOne(idx);
    }
}

void updateRangePoint(int l, int r, ll val) {
    update(ft1,l,(n-l+1)*val);
    update(ft1,r+1,-val*(n-r));
    update(ft2,l,val);
    update(ft2,r+1,-val);
}

ll rsq(vector<ll> &ft, int idx) {
    ll ans = 0;
    while (idx > 0) {
        ans += ft[idx];
        idx -= LSOne(idx);
    }
    return ans;
}

ll prefixSum(int idx) {
    return rsq(ft1,idx) - rsq(ft2,idx)*(n-idx);
}

ll getSum(int l, int r) {
    return prefixSum(r) - prefixSum(l-1);
}

signed main() {
    cin >> n >> q;
    a.resize(n+1); ft1.resize(n+1); ft2.resize(n+1); 
    for (int i = 1; i <= n ; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) 
        updateRangePoint(i,i,a[i]);
    
    for (int i = 1; i <= q; i++) {
        int op; cin >> op;
        if (op == 1) {
            int l,r; ll val; cin >> l >> r >> val;
            updateRangePoint(l,r,val);
        } else {
            int l,r; cin >> l >> r;
            cout << getSum(l,r) << "\n";
        }
    }
    return 0;
}
