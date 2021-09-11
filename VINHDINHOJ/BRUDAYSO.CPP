#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n; cin >> n;
    long long ans = 1;
    if (n == 1) {
        cout << ans;
        return 0;
    }

    while (n != 1) {
        if (n % 2 == 1) n = 3*n+1;
        else n = n / 2;
        ans++;
    }
    cout << ans;
    return 0;
}
