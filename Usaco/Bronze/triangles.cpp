#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("triangles.in","r",stdin); freopen("triangles.out","w",stdout);
    int n; cin >> n;
    int x[n],y[n];
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];


    int ans = -1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                if (y[i] == y[j] && x[i] == x[k]) {
                    int cur = (x[j]-x[i])*(y[k]-y[i]);
                    if (cur < 0) cur *= -1;
                    ans = max(ans,cur);
                }
    cout << ans;
    return 0;
}
