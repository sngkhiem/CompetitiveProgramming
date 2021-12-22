#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,x; cin >> n >> x;
        int a[n+1],b[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a+1,a+n+1);
        int flag = 0;

            for (int i = 1; i <= n; i++) {
                if (b[i] != a[i] && i-x<=0 && i+x > n) {
                    cout << "NO\n"; flag = 1; break;
                }
            }

        if (flag == 0) cout << "YES\n";
    }
    return 0;
}
