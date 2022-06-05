#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,x; cin >> n >> x;
        int cntOdd = 0, cntEven = 0;
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            if (cur % 2 == 0) cntEven++;
            else cntOdd++;
        }
        cout << ((cntOdd >= x && x % 2 == 1) || (x % 2 == 0 && cntOdd >= x-1 && cntEven >= 1) ||
                 (cntOdd < x && cntOdd % 2 == 1 && cntEven >= x-cntOdd) ||
                 (cntOdd < x && (cntOdd-1) % 2 == 1 && cntEven >= x-cntOdd+1) ? "Yes\n" : "No\n");
    }
    return 0;
}
