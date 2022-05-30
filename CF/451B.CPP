#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n; int a[n+1],b[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i],b[i] = a[i];
    sort(b+1,b+1+n);
    int l = 1, r = 1;
    for (int i = n; i >= 1; i--) {
        if (a[i] != b[i]) {
            r = i; break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] != b[i]) {
            l = i; break;
        }
    }
    reverse(a+l,a+r+1);
    //for (int i = 1; i <= n; i++) cout << a[i] << " "; cout << "\n";
    if (is_sorted(a+1,a+1+n)) {
        cout << "yes\n" << l << " " << r;
    } else cout << "no";
    return 0;
}
