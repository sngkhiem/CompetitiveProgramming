#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n,c1 = 0,c2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            if (cur == 1) c1++;
            else c2++;
        }
        if (c1>c2) {
            if ((c1-c2*2)%2==0) cout << "YES\n";
            else cout <<"NO\n";
        }
        else {
            if ((c2*2-c1)%2==0 && c1 != 0) cout << "YES\n";
            else if (c2%2 == 0 && c1%2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
