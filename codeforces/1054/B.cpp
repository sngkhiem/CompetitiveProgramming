#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    if (a[0] != 0) {cout << 1; return 0;}
    else {
        int ma = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > ma + 1) {
                cout << i+1; return 0;
            }
            ma = max(ma,a[i]);
        }
    }
    cout << -1; return 0;
    return 0;
}
