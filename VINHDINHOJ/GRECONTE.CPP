#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int ans = 0;
    int prev = 0;
    for (int i = 0; i < n; i++) {
        int l = prev, r = n-1; 
        while (l <= r) {
            int m = (l+r)/2;
            if (a[m] < i+1) l = m + 1;
            else r = m - 1;
        }
        prev = l + 1;
        if (l < n) ans++;
    }
    cout << ans;
    return 0;
}
