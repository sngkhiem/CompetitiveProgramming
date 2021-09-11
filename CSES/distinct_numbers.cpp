#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);

    int cur = a[0],cnt=1;
    for (int i = 1; i < n; i++)
        if (a[i] != cur) {
            cnt++; cur = a[i];
        } else cur = a[i];
    cout << cnt;
    return 0;
}
