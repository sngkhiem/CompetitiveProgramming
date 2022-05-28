#include <bits/stdc++.h>

using namespace std;

#define int long long

const int maxn = 1e5+5;

int a[maxn],ans1[maxn],ans2[maxn];

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans1[a[i]] = i-1+1;
        ans2[a[i]] = n-i+1;
    }
    int m; cin >> m;
    int res1 = 0, res2 = 0;
    while (m--) {
        int cur; cin >> cur;
        res1 += ans1[cur]; res2 += ans2[cur];
    }
    cout << res1 << " " << res2;
    return 0;
}
