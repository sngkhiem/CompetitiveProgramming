#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    int a[n+1],b[m];
    long long sum = 0;
    for (int i = 1; i <= n; i++) cin >> a[i],sum+=a[i];
    sort(a+1,a+1+n);
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b,b+m);
    cout << sum - a[n-b[0]+1];
    return 0;
}
