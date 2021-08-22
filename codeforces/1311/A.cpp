#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;
        if (a == b) cout << 0 << endl;
        else if (a < b) {
            int tmp = b - a;
            if (tmp == 1 || tmp % 2 == 1) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else {
            int tmp = a - b;
            if (tmp % 2 == 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}
