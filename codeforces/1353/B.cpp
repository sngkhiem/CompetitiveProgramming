#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a[35],b[35],n,k,sum=0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 1; i <= n; i++) cin >> b[i];
        sort(a+1,a+1+n); sort(b+1,b+1+n,greater<int>());
        for (int i = 1; i <= k; i++) {
            int tmp = sum;
            if (sum-a[i]+b[i]<tmp) break;
            sum = sum - a[i] + b[i];
        }
        cout << sum << endl;
    }
    return 0;
}
