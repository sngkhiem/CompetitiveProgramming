#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    char a[t];
    for (int i = 0; i < t; i++) cin >> a[i];
    int ans =0;
    for (int i = 0; i < t-1; i++) {
        if (a[i] == a[i+1]) ans++;
    }
    cout << ans;
    return 0;
}
