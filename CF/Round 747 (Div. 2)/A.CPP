#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n-1 == 0) cout << 0 << " " << n << "\n";
        else cout << "-" << n-1 << " " << n << "\n";
    }
    return 0;
}
