#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    if (n < m) cout << -1;
    else {
        int low;
        if (n % 2 != 0) low = n / 2 + 1;
        else low = n / 2;
        for (int i = low; i <= n; i++)
            if (i % m == 0) {cout << i; return 0;}
        cout << -1;
    }
    return 0;
}
