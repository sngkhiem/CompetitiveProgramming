#include <bits/stdc++.h>

using namespace std;

const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};
const int row = 305, col = 305;

#define int long long

struct elements {
    int val,x,y;
    bool operator <(const elements &other) const {
        return val < other.val;
    }
};

int grid[row][col];
bool vis[row][col];

signed main() {
    //freopen("inp.txt","r",stdin); freopen("out.txt","w",stdout);
    int t; cin >> t;
    int tmp = t;
    while (t--) {
        int row,col; cin >> row >> col;
        memset(vis,false,sizeof vis);
        priority_queue<elements> pq;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++) {
                cin >> grid[i][j];
                pq.push({grid[i][j],i,j});
            }
        int ans = 0;
        while (!pq.empty()) {
            elements cur = pq.top(); pq.pop();
            //cout << cur.x << " " << cur.y << "\n";
            vis[cur.x][cur.y] = true;
            for (int i = 0; i < 4; i++) {
                int u = cur.x+dX[i], v = cur.y+dY[i];
                if (u >= 0 && u < row && v >= 0 && v < col && !vis[u][v]) {
                    if (abs(cur.val-grid[u][v]) > 1) {
                        int nxtVal = max(cur.val,grid[u][v]) - min(cur.val,grid[u][v])-1;
                        ans += nxtVal;
                        vis[u][v] = true;
                        grid[u][v] += nxtVal;
                        //cout << u << " " << v << "\n";
                        pq.push({grid[u][v],u,v});
                    }
                }
            }
        }
        cout << "Case #" << tmp-t << ": " << ans << "\n";
    }
    return 0;
}
