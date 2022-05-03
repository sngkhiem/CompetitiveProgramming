#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m,k; cin >> n >> m >> k;
    int a[n],b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a,a+n); sort(b,b+m);
    int idx1=0,ans=0,idx2=0;
    while (idx1 < n && idx2 < m) {
        if (abs(a[idx1]-b[idx2]) <= k) idx1++,idx2++,ans++;
        else if (b[idx2] < a[idx1]-k) idx2++;
        else if (b[idx2] > a[idx1]+k) idx1++;
    }
    cout << ans;
    return 0;
}
