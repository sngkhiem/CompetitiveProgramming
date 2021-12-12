#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MOD = 1e9+7;
const int INF = -1e9+5;

signed main() {
    int n; cin >> n; int a[n];
    int nega = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) nega++;
        if (a[i] == 0) zero++;
    }

    if (nega % 2 == 1) {
        long long ans = 1;
        int mx = INF;
        for (int i = 0; i < n; i++)
            if (a[i] < 0) mx = max(mx,a[i]);
        for (int i = 0; i < n; i++)
            if (a[i] != mx) ans = ans * a[i] % MOD;
        cout << ans;
    } else if (zero != 0) {
        long long ans = 1;
        bool flag = false;
        for (int i = 0; i < n; i++)
            if (a[i] == 0 && !flag) {
                flag = true; continue;
            } else ans = ans * a[i] % MOD;
        cout << ans;
    } else {
        long long ans = 1;
        for (int i = 0; i < n; i++) ans = ans * a[i] % MOD;
        cout << ans;
    }
    return 0;
}
