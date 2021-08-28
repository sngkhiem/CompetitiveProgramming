#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int ans;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; int a[n+1],mem[n+1];
        memset(mem,0,sizeof mem);
        for (int i = 1; i <= n; i++) cin >> a[i];

        int ans = 0;
        for (int i = 1; i < n; i++) {
            int tmp = min(a[i],a[i+1]), tmp2 = max(a[i],a[i+1]);
            while (tmp*2<tmp2) {
                ans++; tmp *= 2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
