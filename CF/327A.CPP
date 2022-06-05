#include <bits/stdc++.h>

using namespace std;

int a[105],b[105];

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i],b[i]=a[i];

    int ans = -1;
    for (int i = 0; i <  n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            if (i <= j) {
                for (int p = i; p <= j; p++)
                    a[p] = 1 - a[p];
                for (int p = 0; p < n; p++)
                    cnt += (a[p] ? 1 : 0);
                ans = max(ans,cnt);
                for (int p = 0; p < n; p++)
                    a[p] = b[p];
            }
        }
    }
    cout << ans;
    return 0;
}
