#include <bits/stdc++.h>

using namespace std;

int n;

void solve() {
    bool check[300005]; int a[3005];
    memset(check,false,sizeof check);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n-1; i++)
        check[abs(a[i]-a[i+1])] = true;
    for (int i = 1; i <= n-1; i++)
        if (!check[i]) {
            cout << "Not Jolly\n";
            return;
        }
    cout << "Jolly\n";
    return;
}

signed main() {
    while (cin >> n) {
        solve();
    }
    return 0;
}
