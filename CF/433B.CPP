#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;

long long a[maxn],b[maxn],pref1[maxn],pref2[maxn];

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) pref1[i] = pref1[i-1] + a[i];
    sort(a+1,a+1+n);
    for (int i = 1; i <= n; i++) pref2[i] = pref2[i-1] + a[i];
    int m; cin >> m;
    while (m--) {
        int op; cin >> op;
        if (op == 1) {
            int l,r; cin >> l >> r;
            cout << pref1[r] - pref1[l-1] << "\n";
        } else {
            int l,r; cin >> l >> r;
            cout << pref2[r] - pref2[l-1] << "\n";
        }
    }
    return 0;
}
