#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

signed main() {
    int n,m,cur;
    int caseIdx = 0;
    while (cin >> n) {
        if (n == 0) break;
        cout << "Case " << ++caseIdx << ":\n";
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> m;
        for (int i = 0; i < m; i++) {
            int ans = 0, mn = inf;
            cin >> cur;
            for (int p = 0; p < n-1; p++)
                for (int q = p+1; q < n; q++) {
                    if (abs((a[p]+a[q])-cur) < mn) {
                        mn = abs((a[p]+a[q])-cur);
                        ans = a[p]+a[q];
                    }
                }
            cout << "Closest sum to " << cur << " is " << ans << ".\n";

        }

    }
    return 0;
}
