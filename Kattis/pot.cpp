#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    int ans = 0;
    while (n--) {
        int cur; cin >> cur;
        ans += pow(cur / 10,cur % 10);
        //cout << cur / 10 << " " << cur % 10 << "\n";
    }
    cout << ans;
    return 0;
}
