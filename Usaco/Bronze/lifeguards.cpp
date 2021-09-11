#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("lifeguards.in","r",stdin); freopen("lifeguards.out","w",stdout);
    int n; cin >> n;
    int x[n],y[n];
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int covered[1005];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int curCovered = 0;
        fill(covered,covered+1001,0);
        for (int j = 0; j < n; j++)
            if (j != i) {
                for (int k = x[j]; k < y[j]; k++) covered[k] = 1;
            }
        for (int i = 0; i < 1000; i++) {
            if (covered[i] == 1) curCovered++;
            ans = max(ans,curCovered);
        }
    }
    cout << ans;
    return 0;
}
