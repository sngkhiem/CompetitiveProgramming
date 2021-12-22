#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

signed main() {
    int n; cin >> n;
    int tmp; cin >> tmp;
    int mi = tmp, ma = tmp;
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp > ma) {
            ma = tmp; ans++;
        }
        if (tmp < mi) {
            mi = tmp; ans++;
        }
    }
    cout << ans;
    return 0;
}
