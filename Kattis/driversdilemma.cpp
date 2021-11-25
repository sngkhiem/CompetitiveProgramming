#include <bits/stdc++.h>

using namespace std;

signed main() {
    double c,x,m; cin >> c >> x >> m;
    double mph,mpg;
    double ans = 0;
    for (int i = 0; i < 6; i++) {
        cin >> mph >> mpg;
        double cnt;
        cnt = m / mph;
        if (x*cnt + (mph/mpg)*cnt <= c/2 )
            ans = mph;
    }
    if (ans != 0) cout << "YES " << ans;
    else cout << "NO";
    return 0;
}
