#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    vector<int> ans;
    while (t--) {
        int n; cin >> n; int a[n];
        int mn = n+1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = n-1; i >= 0; i--) {
            if (a[i] > mn) ans.push_back(a[i]);
            mn = min(mn,a[i]);
        }
        cout << ans.size() << "\n";
        sort(ans.begin(),ans.end());
        for (auto x: ans) cout << x << "\n";
        ans.clear();
    }
    return 0;
}
