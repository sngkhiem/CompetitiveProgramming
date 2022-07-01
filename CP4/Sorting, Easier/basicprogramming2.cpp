#include <bits/stdc++.h>

using namespace std;

int a[200005];

signed main() {
    int n,t; cin >> n >> t;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+1+n);
    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            if (binary_search(a+1,a+1+n,7777-a[i])) {
                cout << "Yes";
                return 0;
            }
        }
        cout << "No";
    } else if (t == 2) {
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i+1]) {
                cout << "Contains duplicate";
                return 0;
            }
        }
        cout << "Unique";
    } else if (t == 3) {
        int cnt = 1;
        for (int i = 1; i <= n; i++) {
            if (a[i] == a[i+1]) cnt++;
            else {
                if (cnt > n/2) {
                    cout << a[i]; return 0;
                }
                cnt = 1;
            }
        }
        cout << "-1";
    } else if (t == 4) {
        if (n % 2 == 0) cout << a[n/2] << " " << a[n/2+1];
        else cout << a[n/2+1];
    } else if (t == 5) {
        for (int i = 1; i <= n; i++)
            if (a[i] >= 100 && a[i] <= 999) cout << a[i] << " ";
    }
    return 0;
}
