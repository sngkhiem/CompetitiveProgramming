#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    cin >> n;
    int tmp = -1;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        if (cur > tmp+1) {
            cout << i+1; return 0;
        }
        tmp = max(tmp,cur);
    }
    cout << -1;
    return 0;
}
