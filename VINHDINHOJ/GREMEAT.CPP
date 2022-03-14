#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define int long long

signed main() {
    int n; cin >> n;
    pair<int,int> a[n];
    for (int i = 0; i < n; i++) cin >> a[i].fi >> a[i].se;
    
    int mnCost = a[0].se;
    for (int i = 1; i < n; i++) mnCost = min(mnCost,a[i].se), a[i].se = mnCost;
    long long ans = 0;
    for (int i = 0; i < n; i++) ans += a[i].se*a[i].fi;
    cout << ans;
    return 0;
}
