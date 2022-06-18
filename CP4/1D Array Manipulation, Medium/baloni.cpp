#include <bits/stdc++.h>

using namespace std;

int mark[1000005];

signed main() {
    int n; cin >> n; int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        mark[a[i]]++;
        if (mark[a[i]+1]) {mark[a[i]+1]--; continue;}
        else ans++;
    }
    cout << ans;
    return 0;
}
