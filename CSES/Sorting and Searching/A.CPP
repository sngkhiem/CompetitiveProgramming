#include <bits/stdc++.h>

using namespace std;

signed main() {
    unordered_set<int> ans;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp; ans.insert(tmp);
    }
    cout << ans.size();
    return 0;
}
