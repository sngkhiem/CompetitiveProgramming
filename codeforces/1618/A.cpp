#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a[7];
        for (int i = 0; i < 7; i++) cin >> a[i];
        sort(a,a+7);
        cout << a[0] << " " << a[1] << " " << a[6]-a[1]-a[0] << "\n";
    }
    return 0;
}