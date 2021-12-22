#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            sum += tmp;
        }
        if (sum % n != 0) cout << sum/n+1 << "\n";
        else cout << sum/n << "\n";
    }
    return 0;
}
