#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        string s[n];
        int ans = 1000000000, tmpAns = 1000000000;
        for (int i = 0; i < n; i++) cin >> s[i];
        for (int i = 0; i < n; i++) {
            int tmp;
            tmpAns = 1000000000;
            bool flag = false;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    tmp = 0;
                    for (int p = 0; p < m; p++) tmp += abs(s[i][p]-s[j][p]);
                    flag = true;
                }
                if (flag) tmpAns = min(tmpAns,tmp);
            }
            ans = min(ans,tmpAns);
        }
        cout << ans << "\n";
    }
    return 0;
}

