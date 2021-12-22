#include <bits/stdc++.h>

using namespace std;

#define int long long

const int INF = 1e18;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,sum=0; cin >> n;
    int heros[n+2]; heros[n+1] = INF;
    for (int i = 1; i <= n; i++) {
        cin >> heros[i];
        sum += heros[i];
    }

    sort(heros+1,heros+1+n);
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int def,att; cin >> def >> att;

        int idx = lower_bound(heros+1,heros+1+n,def) - heros;
        if (idx == n+1) cout << def - heros[n] + max(0LL,att-sum+heros[n]) << "\n";
        else if (idx == 1) cout << max(0LL,att-sum+heros[1]) << "\n";
        else {
            int tmp = max(0LL,def-heros[idx-1])+max(0LL,att-sum+heros[idx-1]);
            int tmp2 = max(0LL,att-sum+heros[idx]);
            cout << min(tmp,tmp2) << "\n";
        }
    }
    return 0;
}
