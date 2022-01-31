#include <bits/stdc++.h>

using namespace std;

const int inf = 1e3;

signed main() {
    int n,a,b; cin >> n >> a >> b;
    int ans = -inf; 
    for (int i = 1; i < inf; i++) {
        int tmp = a, tmp2 = b, cnt = 0;
        while (tmp > 0) {
            tmp -= i; cnt++;
            if (tmp < 0) { 
                cnt--; break;
            }
        }

        while (tmp2 > 0) {
            tmp2 -= i; cnt++;
            if (tmp2 < 0) {
                cnt--; break;
            }
        }
        if (cnt >= n && i <= min(a,b)) ans = max(ans,i);
    }
    cout << ans;
    return 0;
}
