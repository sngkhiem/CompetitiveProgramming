#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        cout << min({a,b,(a+b)/3}) << "\n";
    }
    return 0;
}
