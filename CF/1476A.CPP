#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        if (k >= n) {
            if (k % n == 0) cout << k/n << "\n";
            else cout << k/n+1 << "\n";
        } else {
            if (n % k == 0) k *= (n/k);
            else k *= (n/k+1);

            if (k % n == 0) cout << k/n << "\n";
            else cout << k/n+1 << "\n";
        }
    }
    return 0;
}
