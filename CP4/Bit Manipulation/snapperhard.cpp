#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    for (int d = 1; d <= t; d++) {
        int n,k; cin >> n >> k;
        int minSteps = pow(2,n);
        if (k % minSteps == minSteps-1) cout << "Case #" << d << ": " << "ON\n";
        else cout << "Case #" << d << ": " << "OFF\n";
    }
    return 0;
}
