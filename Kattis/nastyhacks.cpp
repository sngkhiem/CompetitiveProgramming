#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    while (n--) {
        int r,e,c; cin >> r >> e >> c;
        if (r < e-c) cout << "advertise\n";
        else if (r == e-c) cout << "does not matter\n";
        else cout << "do not advertise\n";
    }
    return 0;
}
