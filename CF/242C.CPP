#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0,0,1,-1,1,-1,1,-1};
const int dy[] = {1,-1,0,0,-1,1,1,-1};
const int upper = 1e9;

unordered_map<int,unordered_map<int,bool>> vis, allowed;
unordered_map<int,unordered_map<int,int>> d;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int x0,y0,x1,y1; cin >> x0 >> y0 >> x1 >> y1;
    int n; cin >> n;
    while (n--) {
        int r,a,b; cin >> r >> a >> b;
        for (int i = a; i <= b; i++) allowed[r][i] = true;
    }
    queue<pair<int,int>> q; q.push({x0,y0});
    vis[x0][y0] = true;
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second; q.pop();
        for (int i = 0; i < 8; i++) {
            int nxtX = x+dx[i], nxtY = y+dy[i];
            if (nxtX == x1 && nxtY == y1) {
                cout << d[x][y]+1;
                return 0;
            }
            if (nxtX >= 1 && nxtX <= upper && nxtY >= 1 && nxtY <= upper && allowed[nxtX][nxtY] && !vis[nxtX][nxtY]) {
                q.push({nxtX,nxtY}); vis[nxtX][nxtY] = true;
                d[nxtX][nxtY] = d[x][y] + 1;
            }
        }
    }
    cout << -1;
    return 0;
}
