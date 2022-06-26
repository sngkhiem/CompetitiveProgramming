/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        ll n,z; cin >> n >> z;
        ll a[n+1],b[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) b[i] = z;
        ll ans = -1;
        for (int j = 1; j <= 10000; j++) {
            for (int i = 1; i <= n; i++) {
                ll x = a[i], y = b[i];
                a[i] = x | y;
                b[i] = x & y;
                ans = max(ans,x);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
