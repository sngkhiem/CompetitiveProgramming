#include <bits/stdc++.h>

using namespace std;

const int dX[] = {0,0,-1,1};
const int dY[] = {-1,1,0,0};

char grid[55][55];
int r,c;
bool vis[55][55];

bool valid(int x, int y) {
	if (vis[x][y] || x < 0 || x >= r || y < 0 || y >= c || grid[x][y] == 'W') return false;
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
	cin >> r >> c;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			cin >> grid[i][j];
		}

	int ans = 0;
	for (int i = 0; i < r; i++) 
		for (int j = 0; j < c; j++) 
			if (!vis[i][j] && grid[i][j] == 'L') {
				bfs(i,j); ans++;
			}

	cout << ans;
	return 0;
}