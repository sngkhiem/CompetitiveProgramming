#include <bits/stdc++.h>

using namespace std;

const int MOD = 14062008;

signed main() {
    int n,k; cin >> n >> k;
    int f[n+1] = {0};
    for (int i = 0; i < k; i++) {
        int cur; cin >> cur; f[cur] = -1;
    }

    f[1] = 1;
    for (int i = 2; i <= n; i++)
        if (f[i] >= 0) {
            if (f[i-1] >= 0) f[i] += f[i-1];
            if (f[i-2] >= 0) f[i] += f[i-2];
            f[i] %= MOD;
        }

    cout << f[n];
    return 0;
}
