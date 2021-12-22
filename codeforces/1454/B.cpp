#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+5;
const int INF = 1e9;

int d[N];
int idx[N];

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        memset(d,0,sizeof d);
        memset(idx,0,sizeof idx);
        int n; cin >> n;
        int ma = -1;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            d[tmp]++;
            idx[tmp] = i+1;
            ma = max(ma,tmp);
        }
        int ans = -1;
        for (int i = 1; i <= ma; i++) {
            if (d[i] == 1) {
                ans = idx[i];
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
