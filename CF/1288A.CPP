#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,d; cin >> n >> d;
        bool flag = false;
        if (d <= n) cout << "YES\n";
        else {
            int mn = 1000000000;
            for (int i = 1; i <= 10000000; i++) {
                int tmp;
                if (d % (i+1) == 0) tmp = i + d/(i+1);
                else tmp = i+1+d/(i+1);
                mn = min(mn,tmp);
                //if (i == 1) cout << tmp;
            }
            if (mn <= n) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
