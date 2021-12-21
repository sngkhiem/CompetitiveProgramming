#include <bits/stdc++.h>

using namespace std;

const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

char grid[55][55];
bool vis[55][55];
bool risk[55][55];
int w,h;

bool valid(int x, int y) {
    if (vis[x][y] || x < 0 || x >= h || y < 0 || y >= w || grid[x][y] == '#' || grid[x][y] == 'T') return false;
    return true;
}

int bfs(int x, int y) {
    int ans = 0;
    queue<pair<int,int>> q;
    if (!risk[x][y]) q.push({x,y});
    vis[x][y] = true;
    while (!q.empty()) {
        auto u = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nxtX = u.first+dX[i];
            int nxtY = u.second+dY[i];
            if (valid(nxtX,nxtY)) {
                if (grid[nxtX][nxtY] == 'G') ans++;
                vis[nxtX][nxtY] = true;
                if (!risk[nxtX][nxtY]) q.push({nxtX,nxtY});
            }
        }
    }
    return ans;
}

signed main() {
    cin >> w >> h;
    int x,y;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'P') {
                x = i; y = j;
            }
        }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (int k = 0; k < 4; k++) {
                int nxtX = i + dX[k];
                int nxtY = j + dY[k];
                if (nxtX >= 0 && nxtX < h && nxtY >= 0 && nxtY < w && grid[nxtX][nxtY] == 'T')
                    risk[i][j] = true;
            }
        }
    }
    cout << bfs(x,y);

    return 0;
}
