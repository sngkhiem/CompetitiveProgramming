#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,s[55],ans=OO;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> s[i];
        sort(s+1,s+1+n);
        //if (n == 2) cout << s[2] - s[1] << endl;
        for (int i = 1; i < n; i++)
            ans = min(ans,s[i+1]-s[i]);
        cout << ans << endl;
    }
    return 0;
}
