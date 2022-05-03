#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,x; cin >> n >> x;
    int a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    int l=0,r=n-1;
    int ans = 0;
    while (true) {
        if (a[r]+a[l] <= x) l++,r--,ans++;
        else r--,ans++;
        if (r==l || r<l) break;
    }
    if (r==l) ans++;
    cout << ans;
    return 0;
}
