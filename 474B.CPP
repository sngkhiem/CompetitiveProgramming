#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    vector<int> a; a.resize(n+1);
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        a[i] = a[i-1]+tmp;
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int cur; cin >> cur;
        auto idx = lower_bound(a.begin(),a.end(),cur);
        cout << idx - a.begin() << "\n";
    }
    return 0;
}
