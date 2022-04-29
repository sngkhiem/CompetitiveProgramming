#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b; cin >> a >> b;
    int du = 0;
    int ans = a;
    while (a >= b) {
        ans += a/b;
        du = a % b;
        a /= b;
        a += du;
    }
    cout << ans;
    return 0;
}
