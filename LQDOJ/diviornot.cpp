#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) cout << i << " ";
    }
    return 0;
}
