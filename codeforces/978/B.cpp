#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n, cur = 0, max1 = 0, ans = 0; string s;
    cin >> n; cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') cur++;
        else {
            cur = 0;
            if (max1 >= 3) ans += (max1 - 2);
            max1 = 0;
        }
        max1 = max(max1,cur);
    }
    if (max1 >= 3) ans += (max1 -2);
    cout << ans;
    return 0;
}