#include <bits/stdc++.h>

using namespace std;

long long ans[500005];

signed main() {
    ans[1] = 0;
    for (long long i = 3; i <= 500000; i += 2) {
        ans[i] = ans[i-2]+(i*4-4)*(i-(i/2+1));
    }
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << ans[n] << "\n";
    }
    return 0;
}
