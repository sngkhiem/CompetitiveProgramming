#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    while (n--) {
        int cur; cin >> cur;
        if (cur % 2 == 0) cout << cur << " is even\n";
        else cout << cur << " is odd\n";
    }
    return 0;
}
