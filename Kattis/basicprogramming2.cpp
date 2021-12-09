#include <bits/stdc++.h>

using namespace std;

signed main () {
    int n,t; cin >> n >> t; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    if (t == 1) {
        for (int i = 0; i < n; i++)
            if (binary_search(a,a+n,7777-a[i])) {
                cout << "Yes";
                return 0;
            }
        cout << "No";
    } else if (t == 2) {
        for (int i = 0; i < n-1; i++)
            if (a[i] == a[i+1]) {
                cout << "Contains duplicate";
                return 0;
            }
        cout << "Unique";
    } else if (t == 3) {
        int cnt = 1, cur = a[0];
        for (int i = 1; i < n; i++) {
            if (cur == a[i]) cnt++;
            else {
                if (cnt > n/2) {
                    cout << cur;
                    return 0;
                }
                cnt = 1; cur = a[i];
            }
        }
        cout << -1;
    } else if (t == 4) {
        if (n % 2 == 1) cout << a[n/2];
        else cout << a[n/2-1] << " " << a[n/2];
    } else {
        for (int i = 0; i < n; i++)
            if (a[i] >= 100 && a[i] <= 999) cout << a[i] << " ";
    }
    return 0;
}
