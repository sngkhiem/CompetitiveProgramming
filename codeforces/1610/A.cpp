#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        if (a == b && a == 1) cout << "0\n";
        else if (min(a,b) == 1) cout << "1\n";
        else cout << "2\n";
    }
    return 0;
}
