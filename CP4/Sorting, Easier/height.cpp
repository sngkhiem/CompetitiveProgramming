#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int idx; cin >> idx;
        int a[20];
        for (int i = 0; i < 20; i++) cin >> a[i];

        int ans = 0;
        for (int i = 0; i < 19; i++)
            for (int j = i+1; j < 20; j++)
                if (a[i] > a[j]) ans++;
        cout << idx << " " << ans << "\n";
    }
    return 0;
}
