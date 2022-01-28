#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mn = inf;
        for (int i = 1; i <= 70000; i++) {
            int cur = i;
            if (n % i == 0) cur += n/i;
            else cur += n/i+1;
            mn = min(mn,cur);
        }
        cout << mn-2 << "\n";
    }
    return 0;
}
