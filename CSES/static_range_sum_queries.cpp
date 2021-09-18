#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 2*1e5+5;

int nums[MAXN];
int f[MAXN];

signed main() {
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> nums[i];
    for (int i = 1; i <= n; i++) f[i] = f[i-1] + nums[i];
    while (q--) {
        int a,b; cin >> a >> b;
        cout << f[b] - f[a-1] << "\n";
    }
    return 0;
}
