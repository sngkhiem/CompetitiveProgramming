#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

int a[N];

signed main() {
    freopen("diamond.in","r",stdin); freopen("diamond.out","w",stdout);
    int n,k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];

    sort(a+1,a+1+n);
    int ans =0;
    for (int i = 1; i <= n; i++) {
        int cnt = 1;
        for (int j = i+1; j <= n; j++)
            if (a[j]-a[i] <= k) cnt++;
            else break;
        ans = max(ans,cnt);
    }
    cout << ans;
    return 0;
}
