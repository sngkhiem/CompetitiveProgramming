#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    if (n % 2 == 1) cout << "still running";
    else {
        int a[n], ans = 0;
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n-1; i+=2)
            ans += (a[i+1]-a[i]);
        cout << ans;
    }
    return 0;
}
