#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int cur, tmp = -1, ans = 0, tmpAns;
        while (cin >> cur && cur != 0) {
            if (tmp == -1) tmp = cur;
            else {
                if (cur>tmp*2) {
                    tmpAns = cur - tmp*2;
                    ans += tmpAns;
                }
                tmp = cur;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
