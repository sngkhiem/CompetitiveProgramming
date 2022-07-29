#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int p1 = 0, p2 = 0;
        for (int i = 0; i < n; i++) {
            string op; int m; cin >> op >> m;
            if (op == "DROP") {
                cout << "DROP 2 " << m << "\n";
                p2 += m;
            } else {
                if (p1 >= m) {
                    cout << "TAKE 1 " << m << "\n";
                    p1 -= m;
                } else {
                    if (p1 != 0) {
                        cout << "TAKE 1 " << p1 << "\n";
                        m -= p1;
                    }
                    cout << "MOVE 2->1 " << p2 << "\n";
                    cout << "TAKE 1 " << m << "\n";
                    p1 = p2-m;
                    p2 = 0;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
