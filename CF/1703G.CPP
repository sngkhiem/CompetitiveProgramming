/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define all(a) a.begin(),a.end()
#define ll long long

ll f[100005][35],a[100005],n,k;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= 30; j++)
                f[i][j] = -4e18;
        for (int i = 1; i <= n; i++) cin >> a[i];
        f[0][0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= 30; j++) {
                f[i][j] = max(f[i][j],f[i-1][j]+(a[i]>>j)-k);
                if (j >= 1) f[i][j] = max(f[i][j],f[i-1][j-1]+(a[i]>>j));
                f[i][30] = max(f[i-1][30],f[i][30]);
            }
        }
        ll ans = 0;
        for (int i = 0; i <= 30; i++) ans = max(ans,f[n][i]);
        cout << ans << "\n";
    }
    return 0;
}

