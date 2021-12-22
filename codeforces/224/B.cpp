#include <bits/stdc++.h>

using namespace std;

int d[100005],cur;

signed main() {
    int n,k; cin >> n >> k;
    int a[n+1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = 1;
    d[a[1]]++; cur++;
    for (int i = 1; i <= n; i++) {
        while (k > cur && r < n) {
            r++;
            if (d[a[r]] == 0) cur++;
            d[a[r]]++;
        }
        while (k == cur && l+1 != r) {
            if (d[a[l]] == 1) break;
            d[a[l]]--; l++;
        }
    }
    if (cur < k) cout << "-1 -1";
    else cout << l << " " << r;
    return 0;
}

