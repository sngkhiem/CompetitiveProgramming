#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    while (cin >> n) {
        string op; int m;
        if (n == 0) break;
        int pile1 = 0, pile2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> op >> m;
            if (op.compare("DROP") == 0) {
                cout << "DROP 2 " << m << "\n";
                pile2 += m;
            }
            if (op.compare("TAKE") == 0) {
                if (pile1 >= m) {
                    cout << "TAKE 1 " << m << "\n";
                    pile1 -= m;
                } else {
                    if (pile1 != 0) {
                        cout << "TAKE 1 " << pile1 << "\n";
                        m -= pile1;
                    }
                    cout << "MOVE 2->1 " << pile2 << "\n";
                    cout << "TAKE 1 " << m << "\n";
                    pile1 = pile2 - m;
                    pile2 = 0;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
