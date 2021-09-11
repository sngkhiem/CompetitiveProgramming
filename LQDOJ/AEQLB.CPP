#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        if (a > b) cout << "NO\n";
        else if ((a*2) % 2 == b % 2 && a*2 <= b) cout << "YES\n";
        else if (a % 2 == b % 2) cout << "YES\n";
        else cout << "NO\n";
    }
}
