#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    long long ans = 0;
    for (int i = 0; i < n-1; i += 2)        
        ans += abs(a[i]-a[i+1]);
    cout << ans;
    return 0;
}
