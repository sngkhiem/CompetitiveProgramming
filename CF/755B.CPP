#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    if (n < m) cout << "NO\n";
    else if (n > m) cout << "YES\n";
    else {
        set<string> a;
        for (int i = 1; i <= n; i++) {
            string tmp; cin >> tmp;
            a.insert(tmp);
        }
        for (int i = 1; i <= m; i++) {
            string tmp; cin >> tmp;
            a.insert(tmp);
        }
        if (a.size() % 2 == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
