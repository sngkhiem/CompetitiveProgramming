#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,a,b; cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (i-1 <= b && n-i >= a) ans++;
    }
    cout << ans;
    return 0;
}
