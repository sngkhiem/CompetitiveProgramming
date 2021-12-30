#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll inf = 1e18;

signed main() {
    //freopen("inp.txt","r",stdin); freopen("out.txt","w",stdout);
    int nTest; cin >> nTest;
    int tmp = nTest;
    while (nTest--) {
        int a,b,c; cin >> a >> b >> c;
        ll f[a][b][c];
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                for (int k = 0; k < c; k++) {
                    ll cur; cin >> cur;
                    if (i > 0) cur += f[i-1][j][k];
                    if (j > 0) cur += f[i][j-1][k];
                    if (k > 0) cur += f[i][j][k-1];
                    if (i > 0 && j > 0) cur -= f[i-1][j-1][k];
                    if (i > 0 && k > 0) cur -= f[i-1][j][k-1];
                    if (j > 0 && k > 0) cur -= f[i][j-1][k-1];
                    if (i > 0 && j > 0 && k > 0) cur += f[i-1][j-1][k-1];
                    f[i][j][k] = cur;
                }
            }
        }

        ll ans = -inf;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                for (int k = 0; k < c; k++) {
                    for (int i1 = i; i1 < a; i1++) {
                        for (int j1 = j; j1 < b; j1++) {
                            for (int k1 = k; k1 < c; k1++) {
                                ll cur = f[i1][j1][k1];
                                if (i > 0) cur -= f[i-1][j1][k1];
                                if (j > 0) cur -= f[i1][j-1][k1];
                                if (k > 0) cur -= f[i1][j1][k-1];
                                if (i > 0 && j > 0) cur += f[i-1][j-1][k1];
                                if (i > 0 && k > 0) cur += f[i-1][j1][k-1];
                                if (j > 0 && k > 0) cur += f[i1][j-1][k-1];
                                if (i > 0 && j > 0 && k > 0) cur -= f[i-1][j-1][k-1];
                                ans = max(ans,cur);
                            }
                        }
                    }
                }
            }
        }
        if (nTest == 0) cout << ans << "\n";
        else cout << ans << "\n\n";

    }
    return 0;
}
