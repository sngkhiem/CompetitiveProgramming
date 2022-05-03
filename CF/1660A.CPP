#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        long long a,b; cin >> a >> b;
        if (a == 0) cout << "1\n";
        else if (b == 0) cout << a+1 << "\n";
        else cout << a+2*b+1 << "\n";
    }
    return 0;
}
