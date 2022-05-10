#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,q; cin >> n >> q;
        ll a[n];
        vector<ll> sum;
        sum.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a,a+n,greater<int>());
        sum[0] = a[0];
        for (int i = 1; i < n; i++) sum[i] = sum[i-1] + a[i];
        for (int i = 0; i < q; i++) {
            ll tmp; cin >> tmp;
            auto idx = lower_bound(sum.begin(),sum.end(),tmp);
            if (idx == sum.end()) cout << "-1\n";
            else cout << idx-sum.begin() + 1 << "\n";
        }
    }
    return 0;
}
