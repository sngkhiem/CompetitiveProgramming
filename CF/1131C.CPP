#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int l = 0, r = n-1;
    vector<int> ans; ans.resize(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) ans[l++] = a[i];
        else ans[r--] = a[i];
    }
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    return 0;
}
