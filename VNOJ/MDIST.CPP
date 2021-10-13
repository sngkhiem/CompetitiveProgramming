#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

signed main() {
    int n; cin >> n;
    pair<int,int> a[n];
    for (int i = 0; i < n; i++) cin >> a[i].fi >> a[i].se;
    int ans = -1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j != i)
                ans = max(ans,abs(a[i].fi-a[j].fi)+abs(a[i].se - a[j].se));
    cout << ans;
    return 0;
}
