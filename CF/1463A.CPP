#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        if ((a+b+c) % 9 == 0) {
            int tmp = (a+b+c)/9;
            if (a >= tmp && b >= tmp && c >= tmp) cout << "YES\n";
            else cout << "NO\n";
        } else cout << "NO\n";
    }
    return 0;
}
