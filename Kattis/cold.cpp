#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,cnt=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        if (cur < 0) cnt++;
    }
    cout << cnt;
    return 0;
}
