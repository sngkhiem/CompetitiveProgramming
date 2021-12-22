#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 1;
    int ma = a[0];
    int cur = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= ma) {
            cur++;
            ma = a[i];
        } else {
            ans = max(ans,cur);
            ma = a[i];
            cur = 1;
        }
    }
    cout << max(ans,cur);
    return 0;
}
