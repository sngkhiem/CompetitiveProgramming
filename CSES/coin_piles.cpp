#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        if ((a+b) % 3 == 0 && max(a,b)/2 <= min(a,b)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
