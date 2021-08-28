#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int ans;


signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b,n; cin >> a >> b >> n;

        int ans = 0;
        if (a<b) swap(a,b);
        while (a <= n) {
            b += a;
            swap(a,b);
            //cout << a << "\n";
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
