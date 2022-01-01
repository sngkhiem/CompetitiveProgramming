#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cnt = 0, cur = 1;
        int a[n+5];
        for (int i = 0; i < n; i++) a[i] = 0;
        bool flag = false;
        while (1) {
            bool flag = false;
            for (int i = 0; i < n; i++)
                if (!a[i]) {
                    a[i] = cur;
                    flag = true;
                    break;
                } else {
                    int y = a[i];
                    if (sqrt(cur+y) == ceil(sqrt(cur+y))) {
                        a[i] = cur;
                        flag = true;
                        break;
                    }
                }
            if (flag) cnt++;
            else break;
            cur++;
        }
        cout << cnt << "\n";
    }
}
