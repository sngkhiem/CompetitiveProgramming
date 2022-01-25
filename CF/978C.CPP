#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n,m; 

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> m;
    vector<ll> a,b,pref;
    a.resize(n+1); b.resize(m+1); pref.resize(n+1);
    pref[0] = 0; a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }
    for (int i = 1; i <= m; i++) cin >> b[i];
    
    for (int i = 1; i <= m; i++) {
        int l = 1, r = n;
        auto idx = lower_bound(pref.begin(),pref.end(),b[i]);
        int f = idx - pref.begin();
        ll k = b[i] - pref[f-1];
        cout << f << " " << k << "\n";
    }

    return 0;
}
