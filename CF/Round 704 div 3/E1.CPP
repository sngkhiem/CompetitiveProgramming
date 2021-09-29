#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        deque<int> dq;
        int mi = INF;
        for (int i = 0; i < n; i++) {
            if (mi == INF) {
                dq.push_front(a[i]);
                mi = a[i];
            } else if (a[i] < mi) {
                dq.push_front(a[i]);
                mi = a[i];
            } else dq.push_back(a[i]);
        }

        for (auto x: dq) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
