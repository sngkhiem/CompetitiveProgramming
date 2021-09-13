#include <bits/stdc++.h>

using namespace std;

bool check(int x) {
    int ans = 1;
    for (int i = 2; i*i <= x; i++)
        if (x % i == 0) ans += (x/i + i);
    if (sqrt(x) == round(sqrt(x))) ans -= sqrt(x);
    return (ans > x ? true : false);
}

signed main() {
    int n; cin >> n; int flag = 0;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        if (check(cur)) {
          cout << cur << "\n"; flag = 1;
        }
    }
    if (flag == 1) cout << -1;
    return 0;
}
