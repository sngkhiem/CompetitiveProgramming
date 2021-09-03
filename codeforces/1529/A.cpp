#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;

signed main() {
    fastIO;
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);

        int tmp = a[0], ans = 1;
        for (int i = 1; i < n; i++)
            if (a[i] == tmp) ans++;
        cout << n-ans << "\n";
    }
    return 0;
}