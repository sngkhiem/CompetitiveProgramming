#include <bits/stdc++.h>

using namespace std;

long long a[105];

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        memset(a,0,sizeof a);
        for (int j = 1; j <= n; j++) cin >> a[j];
        long long ans = a[1];long long ans2 = a[2];
        for (int i = 3; i <= n; i += 2)
            ans = __gcd(ans,a[i]);
        for (int i = 2; i <= n; i += 2)
            if (a[i] % ans == 0) {
                ans = 0;
                break;
            }

        for (int i = 4; i <= n; i += 2)
            ans2 = __gcd(ans2,a[i]);
        for (int i = 1; i <= n; i += 2)
            if (a[i] % ans2 == 0) {
                ans2 = 0;
                break;
            }
        cout << max(ans,ans2) << "\n";
    }
}
