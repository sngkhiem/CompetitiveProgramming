#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    char grid[105][105];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#') {
                cnt++;
                if (grid[i+1][j] == '#') grid[i+1][j] = '.';
                if (grid[i][j+1] == '#') grid[i][j+1] = '.';
            }
        }
    cout << cnt;
    return 0;
}
