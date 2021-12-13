#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    long long a[n],cur;
    for (int i = 0; i < n; i++) {
        long long tmp; cin >> tmp;
        if (i == 0) cur = tmp;
        else cur = __gcd(cur,tmp);
    }
    cout << cur*n;
    return 0;
}
