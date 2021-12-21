#include <bits/stdc++.h>

using namespace std;

const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

char grid[105][105];
bool vis[105][105];
int m,n;

bool valid(int x, int y) {
    if (vis[x][y] || x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == '#') return false;
    return true;
}

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x,y}); vis[x][y] = true;
    while (!q.empty()) {
        auto u = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nxtX = u.first+dX[i];
            int nxtY = u.second+dY[i];
            if (valid(nxtX,nxtY)) {
                vis[nxtX][nxtY] = true;
                q.push({nxtX,nxtY});
            }
        }
    }
}

signed main() {
    int cs = 0;
    while (cin >> m >> n) {
        //if (m == n && m == 0) break;
        memset(vis,false,sizeof vis);
        memset(grid,0,sizeof grid);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];

        int ans = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (!vis[i][j] && grid[i][j] == '-') {
                    bfs(i,j); ans++;
                }
        cout << "Case " << ++cs << ": " << ans << "\n";
    }
    return 0;
}
