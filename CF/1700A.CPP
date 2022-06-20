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
        ll n,m; cin >> n >> m;
        if (n == 1 && m == 1) cout << "1\n";
        else {
            ll ans = 0;
            for (int i = 1; i <= m; i++) ans += i;
            for (int i = m; i <= m*n; i += m) ans += i;
            cout << ans - m << "\n";
        }
    }
    return 0;
}

