#include <bits/stdc++.h>

using namespace std;

const int MAXN = 9999999;

bool Prime[MAXN];
int ans[1000005];
int idx = 1;

void sieve() {
    Prime[0] = Prime[1] = true;
    for (int i = 2; i*i <= MAXN; i++) {
        if (!Prime[i])
            for (int j = i*i; j <= MAXN; j+=i)
                Prime[j] = true;
    }
    for (int i = 2; i <= MAXN; i++)
        if (!Prime[i]) ans[idx++] = i;
}

signed main() {
    sieve();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}
