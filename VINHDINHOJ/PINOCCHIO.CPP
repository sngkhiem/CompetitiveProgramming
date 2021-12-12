#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int cnt = 0,cur;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (cnt == 0) {
            cur = tmp; cnt++;
        }
        else cur = __gcd(cur,tmp);
    }
    cout << cur;
    return 0;
}
