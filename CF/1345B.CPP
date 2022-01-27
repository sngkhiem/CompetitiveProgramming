#include <bits/stdc++.h>

using namespace std;

int h[50005];

signed main() {
    h[1] = 2;
    for (int i = 2; i <= 30000; i++) h[i] = h[i-1]+i*2+i-1;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cnt = 0;
        int lo,hi;
        while (true) {
            lo = 1, hi = 30000;
            while (lo <= hi) {
                int mi = (lo+hi)/2;
                if (h[mi] <= n) lo = mi + 1;
                else hi = mi - 1;
            }
            if (lo == 1) break;
            n -= h[lo-1];
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
