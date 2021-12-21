#include <bits/stdc++.h>

using namespace std;

const int dX[] = {1,-1,-1,1,1,0,-1,0};
const int dY[] = {1,-1,1,-1,0,1,0,-1};

char grid[105][105];
bool vis[105][105];
int m,n;

bool valid(int row, int col) {
    if (vis[row][col] || row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == '.') return false;
    return true;
}

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x,y}); vis[x][y] = true;
    while (!q.empty()) {
        auto u = q.front(); q.pop();
        for (int i = 0; i < 8; i++) {
            int nxtX = u.first+dX[i];
            int nxtY = u.second+dY[i];
            if (valid(nxtX,nxtY)) {
                vis[nxtX][nxtY] = true; q.push({nxtX,nxtY});
            }
        }
    }
}

signed main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    int ans = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (!vis[i][j] && grid[i][j] == '#') {
                bfs(i,j);
                ans++;
            }
    cout << ans;
    return 0;
}
