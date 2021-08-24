#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,cur;
        vector<int> num;
        cin >> n;
        int d[n*2+5];
        memset(d,0,sizeof d);
        for (int i = 1; i <= 2*n; i++) {
            cin >> cur;
            d[cur]++;
            if (d[cur] == 1) num.push_back(cur);
        }

        for (auto x: num) cout << x << " ";
        num.clear();
        cout << endl;
    }
}
