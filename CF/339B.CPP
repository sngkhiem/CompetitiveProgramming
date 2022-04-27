#include <bits/stdc++.h>

using namespace std;

signed main() {
    long long ans = 0;
    int n,m; cin >> n >> m;
    int prev;
    for (int i = 0; i < m; i++) {
        int cur; cin >> cur;
        if (!i) ans += cur, prev = cur;
        else {
            if (cur >= prev) ans += (cur - prev), prev = cur;
            else ans += ((n - prev + 1) + (cur - 1)), prev = cur; 
        }
    }
    cout << ans-1;
    return 0;
}
