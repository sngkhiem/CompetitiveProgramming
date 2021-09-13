#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int k; cin >> k;
        int mem = k;
        int sum = 0;
        while (k--) {
            int cur; cin >> cur;
            sum += cur;
        }
        cout << sum - mem + 1 << "\n";
    }
    return 0;
}
