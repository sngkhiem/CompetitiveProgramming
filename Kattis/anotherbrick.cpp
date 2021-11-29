#include <bits/stdc++.h>

using namespace std;

signed main() {
    int w,h,n; cin >> h >> w >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int idx = 0;
    for (int i = 0; i < h; i++) {
        int curW = 0;
        while (curW + a[idx] <= w && idx < n) {
            curW += a[idx]; idx++;
        }
        if (curW < w) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
