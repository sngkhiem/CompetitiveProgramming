#include <bits/stdc++.h>

using namespace std;

signed main() {
    double n,m,a; cin >> n >> m >> a;
    double ans = ceil(ceil(n/a)*ceil(m/a));
    cout << (long long)ans;
    return 0;
}
