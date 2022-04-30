#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        long long x,y,a,b; cin >> x >> y >> a >> b;
        if (y > x) swap(x,y);
        if (2LL*a <= b) cout << (long long)(x+y)*a << "\n";
        else cout << y*b+(x-y)*a << "\n";
    }
    return 0;
}
