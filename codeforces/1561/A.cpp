#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;


signed main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        if (is_sorted(a+1,a+1+n)) cout << 0 << "\n";
        else {
            int cur = 1;
            while (1<2) {
                if (cur % 2 == 1) {
                    for (int i = 1; i <= n-2; i += 2)
                        if (a[i] > a[i+1]) swap(a[i],a[i+1]);
                }
                else {
                    for (int i = 2; i <= n-1; i += 2)
                        if (a[i] > a[i+1]) swap(a[i],a[i+1]);
                }
                if (is_sorted(a+1,a+n+1)) break;
                cur++;
            }
            cout << cur << "\n";
        }
    }
    return 0;
}
