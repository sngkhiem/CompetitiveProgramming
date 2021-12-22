#include <bits/stdc++.h>

using namespace std;

const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

int par[5000005], Rank[5000005];
int r, c;
bool vis[1005][1005];
int grid[1005][1005];

int find_root(int x) {
    if (par[x] == x) return x;
    return find_root(par[x]);
}

void union_sets(int x, int y) {
    x = find_root(x); y = find_root(y);
    if (x == y) return;
    if (Rank[x] > Rank[y]) swap(x,y);
    par[x] = par[y];
    if (Rank[x] == Rank[y]) Rank[y]++;
}

bool valid(int x, int y) {
    if (vis[x][y] || x < 0 || x >= r || y < 0 || y >= c) return false;
    return true;
}

void bfs (int x, int y) {
    queue<pair<int,int>> q;
    vis[x][y] = true; q.push({x,y});
    while (!q.empty()) {
        auto u = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nxtX = u.first+dX[i];
            int nxtY = u.second+dY[i];
            if (valid(nxtX,nxtY) && grid[nxtX][nxtY] == grid[u.first][u.second]) {
                vis[nxtX][nxtY] = true;
                q.push({nxtX,nxtY});
                union_sets(nxtX*1000+nxtY,u.first*1000+u.second);
            }
        }
    }
}

signed main() {
    for (int i = 0; i <= 1000000; i++) {
        par[i] = i;
        Rank[i] = 1;
    }
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char c; cin >> c;
            grid[i][j] = (c - '0');
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (!vis[i][j]) bfs(i,j);
        }
    }

    int n; cin >> n;
    int x1,y1,x2,y2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1--; y1--; x2--; y2--;
        if (find_root(x1*1000+y1) == find_root(x2*1000+y2)) {
            if (grid[x1][y1] == 1) cout << "decimal\n";
            else cout << "binary\n";
        } else cout << "neither\n";
    }
    return 0;
}
