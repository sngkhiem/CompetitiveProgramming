#include <bits/stdc++.h>

using namespace std;

signed main() {
    int k,m;
    while (cin >> k) {
        if (k == 0) break;
        cin >> m;
        bool ans = true;
        unordered_map<string,int> course;
        for (int i = 0; i < k; i++) {
            string tmp; cin >> tmp;
            course[tmp] = 1;
        }
        for (int i = 0; i < m; i++) {
            int c; int cnt;
            int curCNT = 0;
            cin >> c >> cnt;
            for (int j = 0; j < c; j++) {
                string tmp; cin >> tmp;
                if (course[tmp] == 1) curCNT++;
            }
            if (curCNT >= cnt) continue;
            else ans = false;
        }
        cout << (ans ? "yes\n" : "no\n");
    }
    return 0;
}
