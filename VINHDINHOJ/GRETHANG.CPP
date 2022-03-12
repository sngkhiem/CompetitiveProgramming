#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        cout << min({a[n-1]-1,a[n-2]-1,n-2}) << "\n";
    }
    return 0;
}
