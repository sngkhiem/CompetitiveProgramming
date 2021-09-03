#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;

signed main() {
    fastIO;
    int t; cin >> t;
    while (t--) {
        int n,l = -1,r = -1,ans = 0,flag = 0, flag2 = 0; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (l == -1 && a[i] == 1) l = i;
            else if (a[i] == 1) r = i;
        } 
        if (l == -1 || r == -1) cout << "0\n";
        else {
            for (int i = l+1; i < r; i++) if (a[i] == 0) ans++;
            cout << ans << "\n";
        }
    }
    return 0;
}