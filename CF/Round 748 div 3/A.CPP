#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        cout << max(0,max(b,c)-a+1) << " " << max(0,max(a,c)-b+1) << " " << max(0,max(a,b)-c+1) << "\n";
    }
    return 0;
}
