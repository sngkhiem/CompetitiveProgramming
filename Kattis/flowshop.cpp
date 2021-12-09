#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (i == 0 && j >= 1) a[i][j] += a[i][j-1];
        }
    //cout << endl;
    for (int i = 1; i < n; i++) a[i][0] += a[i-1][0];

    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            a[i][j] += max(a[i][j-1],a[i-1][j]);
    for (int i = 0; i < n; i++) cout << a[i][m-1] << " ";
    return 0;
}
