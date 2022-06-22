#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; 
        int a[n+1]; vector<int> memo[n];
        for (int i = 1; i <= n; i++) cin >> a[i];
        int flag, idx = 0; ll ans = 0;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                if (a[i] > 0) flag = 2;
                else flag = 1;
                memo[idx].push_back(a[i]);
            } else if (a[i] > 0 && flag == 2) memo[idx].push_back(a[i]);
            else if (a[i] > 0 && flag == 1) flag = 2, memo[++idx].push_back(a[i]);
            else if (a[i] < 0 && flag == 1) memo[idx].push_back(a[i]);
            else if (a[i] < 0 && flag == 2) flag = 1, memo[++idx].push_back(a[i]);
        }
        for (int i = 0; i <= idx; i++) ans += *max_element(memo[i].begin(),memo[i].end());
        cout << ans << "\n";
    }
    return 0;
}
