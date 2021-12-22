#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,k; cin >> n >> k;
    int time = 240 - k;
    int cur = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (cur + 5*i <= time) {
            cur += i*5;
            ans++;
        }
        else break;
    }
    cout << ans;
    return 0;
}
