#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b,h; cin >> a >> b >> h;
    int cur = 0, ans = 0;
    while (cur < h) {
        cur = cur + a;
        ans++;
        if (cur >= h) break;
        else cur -= b;
    }
    cout << ans;
    return 0;
}
