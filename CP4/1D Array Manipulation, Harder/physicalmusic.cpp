#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; int a[n+1];
        vector<int> ans; int mn = n+1;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = n; i >= 1; i--) {
            if (a[i] > mn) ans.push_back(a[i]);
            mn = min(mn,a[i]);
        }
        cout << ans.size() << "\n";
        sort(ans.begin(),ans.end());
        for (auto x: ans) cout << x << "\n";
    }
    return 0;
}
