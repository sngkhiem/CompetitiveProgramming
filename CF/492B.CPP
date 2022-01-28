#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;
double a[1005];

signed main() {
    int n,l; cin >> n >> l;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    double mx = -inf;
    for (int i = 0; i < n-1; i++)
        mx = max(mx,abs(a[i]-a[i+1]));
    cout << setprecision(9) << fixed << max({mx/2,a[0]-0,l-a[n-1]});
    return 0;
}
