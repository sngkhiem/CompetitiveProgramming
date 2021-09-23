#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a,b,c; cin >> a >> b >> c;
    if (a + b == c || abs(a-b) == c || (a*b) == c || a % b == 0 && a/b == c || b % a == 0 && b/a == c) cout << "Possible\n";
    else cout << "Impossible\n";
}

signed main() {
    int n; cin >> n;
    while (n--) solve();
    return 0;
}
