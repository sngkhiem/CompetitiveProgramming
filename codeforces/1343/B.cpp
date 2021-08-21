#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int cur;
        cin >> cur;
        if (cur / 2 % 2 == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            int tmp = 2,sum = 0;
            for (int i = 1; i <= cur / 2; i++) {
                sum += tmp;
                cout << tmp << " ";
                tmp += 2;
            }
            tmp = 1;
            int sum1 = 0;
            for (int i = 1; i < cur / 2; i++) {
                sum1 += tmp;
                cout << tmp << " ";
                tmp += 2;
            }
            cout << sum - sum1;
            cout << endl;
        }
    }
    return 0;
}
