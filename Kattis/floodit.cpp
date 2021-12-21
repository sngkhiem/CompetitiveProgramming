#include <bits/stdc++.h>

using namespace std;

const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

int grid[25][25],grid2[25][25],grid3[25][25];
bool vis[25][25];
int ans[6];
int n;

int bfs(int x, int y, int color) {
    vector<pair<int,int>> memo;
    int ans = 1;
    queue<pair<int,int>> q; memo.push_back({x,y});
    q.push({x,y}); vis[x][y] = true;
    while (!q.empty()) {
        auto u = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nxtX = u.first+dX[i];
            int nxtY = u.second+dY[i];
            if (!vis[nxtX][nxtY] && nxtX >= 0 && nxtY >= 0 && nxtX < n && nxtY < n &&
                (grid[nxtX][nxtY] == color || grid[nxtX][nxtY] == grid[u.first][u.second])) {
                memo.push_back({nxtX,nxtY});
                vis[nxtX][nxtY] = true;
                q.push({nxtX,nxtY});
                ans++;
            }
        }
    }
    for (auto x: memo) grid[x.first][x.second] = color;
    memo.clear();
    return ans;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        memset(grid,0,sizeof grid);
        memset(grid2,0,sizeof grid);
        memset(grid3,0,sizeof grid);
        memset(vis,false,sizeof vis);
        memset(ans,0,sizeof ans);
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                char c; cin >> c;
                grid[i][j] = (c - '0');
                grid2[i][j] = grid[i][j];
                grid3[i][j] = grid3[i][j];
            }
        /*int tmp = bfs(0,0,3);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << grid[i][j] << " ";
            cout << "\n";
        }
        memset(vis,false,sizeof vis);
        cout << "\n";
        tmp = bfs(0,0,4);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << grid[i][j] << " ";
            cout << "\n";
        }*/
        //cout << "\n\n";
        int cnt = 0;
        int color = 7;
        int moves = 0;
        while (cnt < n*n) {
            for (int i = n-1; i >= 0; i--) {
                memset(vis,false,sizeof vis);
                int tmp = bfs(0,0,i+1);
                if (cnt < tmp) {
                    for (int p = 0; p < n; p++)
                        for (int q = 0; q < n; q++)
                            grid3[p][q] = grid[p][q];
                    cnt = tmp; color = i;
                } else if (cnt == tmp) {
                    color = min(color,i);
                    for (int p = 0; p < n; p++)
                        for (int q = 0; q < n; q++)
                            grid3[p][q] = grid[p][q];
                }
                for (int p = 0; p < n; p++)
                    for (int q = 0; q < n; q++)
                        grid[p][q] = grid2[p][q];
            }
            for (int p = 0; p < n; p++)
                for (int q = 0; q < n; q++) {
                    grid[p][q] = grid3[p][q];
                    grid2[p][q] = grid3[p][q];
                }
            moves++;
            ans[color]++;

            /*cout << color+1 << "\n";
            for (int p = 0; p < n; p++) {
                for (int q = 0; q < n; q++)
                    cout << grid3[p][q] << " ";
                cout << "\n";
            }
            if (moves == 12) break;*/
        }

        /*cout << "\n\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << grid3[i][j] << " ";
            cout << "\n";
        }
        cout << "\n";
        //cout << cnt;
        cout << moves << "\n";
        cout << "\n";*/
        cout << moves << "\n";
        for (int i = 0; i < 6; i++) cout << ans[i] << " ";
        cout << "\n";
        //cout << moves << "\n";
    }
    return 0;
}
