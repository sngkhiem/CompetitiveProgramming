#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;

int n, a[maxn], ans;

signed main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    for (int i = 0; i < n-1; i += 2) {
        ans += (a[i+1]-a[i]);
    }
    cout << ans;
    return 0;
}
