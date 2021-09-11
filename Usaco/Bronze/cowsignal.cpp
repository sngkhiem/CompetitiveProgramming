#include <bits/stdc++.h>

using namespace std;

#define int long long

char g[1000][1000];

signed main() {
    freopen("cowsignal.in","r",stdin); freopen("cowsignal.out","w",stdout);
    int m,n,k; cin >> m >> n >> k;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];

    for (int p = 0; p < m; p++) {
        for (int i = 0; i < k; i++) {
            for (int q = 0; q < n; q++)
                for (int j = 0; j < k; j++)
                    cout << g[p][q];
            cout << "\n";
        }
        //cout << "\n";
    }
    return 0;
}
