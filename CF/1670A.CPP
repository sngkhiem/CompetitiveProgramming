#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 0) cnt++,a[i] = -a[i];
        }
            for (int i = 0; i < n; i++) {
                if (cnt == 0) break;
                a[i] = -a[i],cnt--;
            }
            if (is_sorted(a,a+n)) cout << "YES\n";
            else cout << "NO\n";

    }
    return 0;
}
