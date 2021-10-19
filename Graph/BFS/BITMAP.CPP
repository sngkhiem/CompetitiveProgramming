#include <bits/stdc++.h>

using namespace std;

#define ii pair<int,int>
#define fi first
#define se second

const int MAXN = 185;
const int INF = 1e9;
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,-1,1};

int n,m;
int a[MAXN][MAXN];
int d[MAXN];
queue<ii> q;

bool check(int a, int b, int c, int d) {
    return (a > 0 && b > 0 && a <= n && b <= m);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                char tmp;
                cin >> tmp;
                if (tmp == '1') {
                    q.push({i,j});
                    a[i][j] = 0;
                } else a[i][j] = -1;
            }

        int cur = 1;
        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                ii tmp = q.front(); q.pop();
                for (int i = 0; i < 4; i++) {
                    int u = tmp.fi+dx[i]; int v = tmp.se+dy[i];
                    if (check(u,v,n,m) && a[u][v] == -1) {
                        q.push({u,v});
                        a[u][v] = cur;
                    }
                }
            }
            cur++;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}
