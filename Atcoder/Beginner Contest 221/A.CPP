#include <bits/stdc++.h>

using namespace std;

signed main() {
    long long a,b; cin >> a >> b;
    long long ans = pow(32,a) / pow(32,b);
    cout << ans;
    return 0;
}
