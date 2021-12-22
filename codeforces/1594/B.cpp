#include <bits/stdc++.h>

using namespace std;

#define int long long

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

string toBin(int n) {
    string ans = "";
    while (n != 0) {
        string tmp = to_string(n % 2);
        n /= 2;
        ans += tmp;
    }
    return ans;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        int ans = 0;
        string tmp = toBin(k);
        for (int i = 0; i < tmp.size(); i++)
            if (tmp[i] == '1') ans = ((ans % MOD) + (binpow(n,i) % MOD)) % MOD;
        cout << ans << "\n";
    }
    return 0;
}
