#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; int a[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        if (a[1]+a[2] <= a[n]) cout << 1 << " " << 2 << " " << n << "\n";
        else cout << "-1\n";
    }
    return 0;
}
