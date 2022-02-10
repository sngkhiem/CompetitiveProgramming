#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int cur = 1;
    int s = 0;
    while (s <= n) {
        s += cur;
        cur += 2;
    }
    cout << s;
    return 0;
}
