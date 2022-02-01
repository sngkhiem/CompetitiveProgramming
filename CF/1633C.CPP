#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        bool flag = false;
        ll hc,dc,hm,dm,k,w,a; cin >> hc >> dc >> hm >> dm >> k >> w >> a;
        ll tmp = hc, tmp2 = dc;
        for (ll i = 0; i <= k; i++) {
            ll hc = tmp, dc = tmp2;
            ll cnt1 = 0, cnt2 = 0;
            hc += (i*a); dc += ((k-i)*w);
            if (hc % dm == 0) cnt1 = (long long)hc/dm;
            else cnt1 = (long long)hc/dm+1;
            if (hm % dc == 0) cnt2 = (long long)hm/dc;
            else cnt2 = (long long)hm/dc+1;
            if (cnt1 >= cnt2) {cout << "YES\n"; flag = true; break;}
        }
        if (!flag) cout << "NO\n";

    }
    return 0;
}
