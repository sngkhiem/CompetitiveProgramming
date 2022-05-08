#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int maxn = 1e5+5;

int a[maxn];

signed main() {
    int t; cin >> t;
    while (t--) {
        vector<int> pos;
        int n,m; cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == m) pos.push_back(i);
        }
        ll ans = -1;
        for (auto x: pos) {
            ll tmpAns = a[x];
            int left = x-1,right = x+1;
            while (left > 0 && a[left] > m) {
                tmpAns += a[left];
                left--;
            }
            while (right <= n && a[right] > m) {
                tmpAns += a[right];
                right++;
            }
            ans = max(tmpAns,ans);
        }
        cout << ans << "\n";
    }
    return 0;
}
