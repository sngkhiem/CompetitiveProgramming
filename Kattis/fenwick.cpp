#include <bits/stdc++.h>

using namespace std;

#define LSOne(S) ((S) & -(S))
#define ll long long

ll n,q;
vector<ll> ft;

ll rsq(ll i) {
    ll ans = 0;
    while (i > 0) {
        ans += ft[i];
        i -= LSOne(i);
    }
    return ans;
}

void update(ll i, ll val) {
    while (i <= n) {
        ft[i] += val;
        i += LSOne(i);
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> q;
    ft.resize(n+1); ft.assign(n+1,0);
    //cout << ft[0] << "\n";
    for (int i = 1; i <= q; i++) {
        char op; cin >> op;
        if (op == '+') {
            ll idx,val; cin >> idx >> val; idx++;
            update(idx,val);
            //cout << ft[0] << "\n";
        } else {
            ll idx; cin >> idx;
            if (!idx) cout << "0\n";
            else cout << rsq(idx) << "\n";
        }
    }
    return 0;
}
