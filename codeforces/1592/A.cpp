#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,H; cin >> n >> H;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n,greater<int>());
        if (H < a[0]) cout << 1 << "\n";
        else if (H % (a[0]+a[1]) != 0) {
            if ((a[0]+a[1])*((H/(a[0]+a[1]))+1)-a[1] >= H) cout << (H / (a[0]+a[1]))*2+1 << "\n";
            else cout << (H / (a[0]+a[1]))*2+2 << "\n";
        }
        else {
            if ((a[0]+a[1])*(H/(a[0]+a[1]))-a[1] >= H) cout << (H / (a[0]+a[1]))*2-1 << "\n";
            else cout << (H / (a[0]+a[1]))*2 << "\n";
        }
     }
    return 0;
}
