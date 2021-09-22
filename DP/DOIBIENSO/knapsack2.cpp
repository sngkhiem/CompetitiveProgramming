#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9+5;

int f[105][100005];

signed main() {
    int n,wei; cin >> n >> wei; int w[n+1],v[n+1];

    int sumV = 0;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
        sumV += v[i];
    }

    int ans = 0;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= sumV; j++)
            f[i][j] = INF;

    f[0][0] = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= sumV; j++) {
            if (f[i][j] != INF) {
                f[i+1][j] = min(f[i+1][j],f[i][j]);
                if (f[i][j]+w[i+1] <= wei) {
                    f[i+1][j+v[i+1]] = min(f[i+1][j+v[i+1]],f[i][j]+w[i+1]);
                }
            }
        }
    for (int i = 0; i <= sumV; i++)
        if (f[n][i] <= wei) {
            ans = max(ans,i);
        }

    cout << ans;
    /*for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sumV; j++)
            cout << f[i][j] << " ";
        cout << "\n";
    }*/
    return 0;
}
