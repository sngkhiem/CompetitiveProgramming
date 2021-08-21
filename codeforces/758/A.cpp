#include <bits/stdc++.h>

using namespace std;

int a[10000];

signed main() {
    int n,ans=0,ma=0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (ma < a[i]) ma = a[i];
    }
    for (int i = 1; i <= n; i++) {
        ans += (ma - a[i]);
    }
    cout << ans;
    return 0;
}
