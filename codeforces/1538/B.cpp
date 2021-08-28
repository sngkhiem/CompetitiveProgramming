#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;
const int N = 1e3+5;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,s=0,ans=0; cin >> n; int a[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            s += a[i];
        }
        if (s%n != 0) cout << "-1\n";
        else {
            for (int i = 1; i <= n; i++)
                if (a[i]>s/n) ans++;
            cout << ans << "\n";
        }
    }
    return 0;
}
