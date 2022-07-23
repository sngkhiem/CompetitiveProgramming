#include <bits/stdc++.h>

using namespace std;

signed main() {
    vector<int> ans;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int mx = -1e9+5;
        for (int j = 1; j <= n; j++) {
            int tmp; cin >> tmp;
            mx = max(mx,tmp);
        }
        ans.push_back(mx);
    }
    for (auto x: ans) cout << x << " " ;
    return 0;
}
