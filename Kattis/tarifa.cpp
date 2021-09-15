#include <bits/stdc++.h>

using namespace std;

signed main() {
    int sum = 0; int x; int n; cin >> x >> n;
    while (n--) {
        int cur; cin >> cur;
        sum += (x-cur);
    }
    cout << sum+x;
    return 0;
}
