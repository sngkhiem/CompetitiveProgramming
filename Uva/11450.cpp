#include <bits/stdc++.h>

using namespace std;

int price[25][25];
int f[25][205];

signed main() {
    //freopen("inp.txt","r",stdin); freopen("out.txt","w",stdout);
    int t; cin >> t;
    while (t--) {
        int m,c; cin >> m >> c;
        for (int i = 0; i < c; i++) {
            cin >> price[i][0];
            //cout << price[i][0] << "\n";
            for (int j = 1; j <= price[i][0]; j++)
                cin >> price[i][j];
        }

        memset(f,false,sizeof f);
        for (int i = 1; i <= price[0][0]; i++)
            if (m - price[0][i] >= 0)
                f[0][m-price[0][i]] = true;

        for (int i = 1; i < c; i++)
            for (int j = 0; j <= m; j++)
                if (f[i-1][j]) {
                    for (int p = 1; p <= price[i][0]; p++)
                        if (j - price[i][p] >= 0)
                            f[i][j-price[i][p]] = true;
                }
        int i;
        for (i = 0; i <= m && !f[c-1][i]; i++);

        if (i == m+1) cout << "no solution\n";
        else cout << m-i << "\n";
    }
    return 0;
}
