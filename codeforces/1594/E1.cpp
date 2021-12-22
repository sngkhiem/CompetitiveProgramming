#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long

const int MOD = 1e9+7;

int binpow(int a, int b) {
    int ans = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) ans = ans * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int cnt = 1; int ans = 6;
    for (int i = 0; i < n; i++) cnt *= 2;
    cnt -= 1;
    ans = (ans * binpow(4,cnt-1))%MOD;
    cout << ans << "\n";
    return 0;
}
