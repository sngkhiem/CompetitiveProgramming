#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll inf = 1e18;

signed main() {
    int n; cin >> n;
    ll a[n+1];
    int cntNegative = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] < 0) cntNegative++;
        
    }
    int d = 0;
    if (cntNegative % 2 == 1 && a[1] < 0) d = 1;
    int r = 1;
    ll tmpValue = 1, ans = 1, tmpLength = 1;
    while (r <= n) {
        r++;
        if (r <= n) {
            if (a[r] < 0) {
                if (cntNegative - 1 > 0) tmpValue *= a[r], tmpLength++, cntNegative--;
                else tmpValue = tmpLength = 1;
                
                if (tmpValue % 2 == 0) ans = max(ans,tmpLength);
            } else {
                tmpValue *= a[r], tmpLength++;
                if (tmpValue % 2 == 0) ans = max(ans,tmpLength);
            }
        }
    }
    cout << ans - d;
    return 0;
}
