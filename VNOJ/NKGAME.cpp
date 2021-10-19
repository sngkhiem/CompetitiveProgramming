#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n+1], b[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    sort(a+1,a+1+n); sort(b+1,b+1+n);
    int l = 1, r = n, res = abs(a[l] + b[r]);
    while (l < n || r > 1) {
        if (l == n) r--;
        else if (r == 1) l++;
        else if (abs(a[l+1]+b[r]) < abs(a[l]+b[r-1])) l++;
        else r--;
        res = min(res,abs(a[l]+b[r]));
    }
    cout << res;
}
