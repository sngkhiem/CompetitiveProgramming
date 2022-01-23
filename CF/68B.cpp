#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4+5;
const double inf = 5e9+5;
const double EPS = 0.000001;
double a[MAXN];

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; double k; cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];

    double lo = 0.0, hi = inf;
    double ans;
    for (int i = 0; i <= 2000; i++) {
        double mi = (lo+hi)/2.0, t = 0.0;
        for (int j = 0; j < n; j++) 
            if (a[j] > mi) {
                double s = (a[j]-mi);
                t += (s - (s*k)/100.0);
            } else if (a[j] < mi) t -= (mi-a[j]);
        if (t < 0.0) hi=mi;
        else lo=mi,ans=mi;
    }
    cout << setprecision(6) << fixed << ans;
    return 0;
}
