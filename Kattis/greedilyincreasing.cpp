#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    vector<int> ans;
    for (int i = 0; i < n; i++) cin >> a[i];

    int cur = a[0];
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++)
        if (cur < a[i]) {
            cur = a[i];
            ans.push_back(a[i]);
        }
    cout << ans.size() << "\n";
    for (auto x: ans) cout << x << " ";
    return 0;
}
