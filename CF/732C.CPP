#include <bits/stdc++.h>


using namespace std;

signed main() {
    long long cnt = 0;
    long long a,b,c; cin >> a >> b >> c;
    long long ans = 0;
    if (max({a,b,c}) != a) ans += max({a,b,c}) - a -1;
    if (max({a,b,c}) != b) ans += max({a,b,c}) - b -1;
    if (max({a,b,c}) != c) ans += max({a,b,c}) - c -1;
    cout << ans;
}
