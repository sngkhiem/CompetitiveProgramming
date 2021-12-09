#include <bits/stdc++.h>

using namespace std;

int rows[30],cols[30];

signed main() {
    int n; cin >> n;
    int ans = 1;
    char grid[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++) {
        int bR = 0,wR = 0,bC = 0, wC = 0;
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'W') wR++;
            else bR++;
            if (grid[j][i] == 'W') wC++;
            else bC++;
        }
        if (bR != wR || wC != bC) ans = 0;
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < n-1; j++) {
            if (grid[i-1][j] == grid[i][j] && grid[i][j] == grid[i+1][j]) ans = 0;
            if (grid[j-1][i] == grid[j][i] && grid[j][i] == grid[j+1][i]) ans = 0;
        }

    }
    cout << ans;
    return 0;
}
