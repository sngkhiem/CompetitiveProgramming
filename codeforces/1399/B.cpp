#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        long long n,a[55],b[55],mi=OO,mi2=OO,ans=0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (mi > a[i]) mi = a[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
            if (mi2 > b[i]) mi2 = b[i];
        }

        for (int i = 1; i <= n; i++) {
            if (a[i] != mi && b[i] != mi2) ans += max(a[i]-mi,b[i]-mi2);
            else if (a[i] != mi) ans += (a[i]-mi);
            else if (b[i]) ans += (b[i] - mi2);

        }

        cout << ans << endl;
    }
    return 0;
}
