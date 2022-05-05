#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fi first
#define se second

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b,c,x,y; cin >> a >> b >> c >> x >> y;
        if (x - a < 0) x = 0;
        else x -= a;
        if (y - b < 0) y = 0;
        else y -= b;
        if (x+y <= c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
