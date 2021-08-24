#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,cur,flag = 0;
        cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        if (a[1] != a[2] && a[2] == a[3]) cout << 1 << endl;
        else if (a[1] != a[2] && a[2] != a[3]) cout << 2 << endl;
        else {
            for (int i = 2; i <= n-2; i++) {
                if (a[i] != a[i+1] && a[i+1] == a[i+2]) {
                    cout << i << endl; flag = 1;
                    break;
                }
                else if (a[i] != a[i+1] && a[i+1] != a[i+2]) {
                    cout << i+1 << endl; flag = 1;
                    break;
                }
            }
            if (flag == 0) cout << n << endl;
        }

    }
}
