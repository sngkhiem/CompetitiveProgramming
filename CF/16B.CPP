#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e8+5;

#define ll long long

ll n,m;
vector<pair<ll,ll>> a;

signed main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        ll c,d; cin >> c >> d;
        a.push_back({d,c});
    }
    sort(a.begin(),a.end());
    long long ans = 0;
    for (int i = a.size()-1; i >= 0; i--) {
        if (n == 0) break;
        if (a[i].second >= n) {
            ans += a[i].first*n;
            break;
        } else {
            ans += a[i].first*a[i].second;
            n -= a[i].second;
        }
    }
    cout << ans;
    return 0;
}
