#include <bits/stdc++.h>

using namespace std;

const double eps = 0.0000001;

signed main() {
    double n; cin >> n;
    double e = 1.0, cur = 1.0,curInc = 3.0;
    while (e <= n) {
        cur = cur + curInc;
        curInc = curInc + 2.0;
        e = e + 1.0/cur;
    }
    cout << setprecision(9) << fixed << e;
}
