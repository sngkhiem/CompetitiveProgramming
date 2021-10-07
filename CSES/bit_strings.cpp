#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MOD = 1e9+7;

int binpow(int a, int b) {
    int res = 1;
    a %= MOD;
    while (b != 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

signed main() {
    int n;
    cin >> n;
    cout << binpow(2,n);
    return 0;
}
