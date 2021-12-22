/*
    Author: sngkhiem
    Created On: 10/28/2021, 9:54:42 AM
    :( Code mãi nhưng vẫn gà
*/

#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define fi first
#define se second
#define vii vector<pair<int,int>>
#define vi vector<int>
#define gcd __gcd

const ll LINF = 1e18;
const ll MOD = 1e9+7;
const int INF = 1e9;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

int n,m,k,tmp3;
char a[55][55],b[55][55];
bool vis[55][55];

struct elements {
    int val, x, y;
    bool operator <(const elements &other) const {
        return val > other.val;
    }
};

void dfs(int x, int y) {
    vis[x][y] = true;
    a[x][y] = '*';
    for (int i = 0; i < 4; i++) {
        int nxtX = x + dX[i];
        int nxtY = y + dY[i];
        if (nxtX >= 0 && nxtY >= 0 && nxtX < n && nxtY < m && a[nxtX][nxtY] == '.') {
            a[nxtX][nxtY] = '*';
            tmp3++;
            if (!vis[nxtX][nxtY]) dfs(nxtX,nxtY);
        }
    }
}

void dfs2(int x, int y) {
    vis[x][y] = true;
    b[x][y] = '*';
    for (int i = 0; i < 4; i++) {
        int nxtX = x + dX[i];
        int nxtY = y + dY[i];
        if (nxtX >= 0 && nxtY >= 0 && nxtX < n && nxtY < m && b[nxtX][nxtY] == '.') {
            b[nxtX][nxtY] = '*';
            if (!vis[nxtX][nxtY]) dfs2(nxtX,nxtY);
        }
    }
}

signed main() {
    fastIO;
    priority_queue<elements> pq;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    
    int tmp;
    for (int i = 0; i < n; i++)
        if (!vis[i][0] && a[i][0] == '.') dfs(i,0);
    for (int i = 0; i < m; i++)
        if (!vis[0][i] && a[0][i] == '.') dfs(0,i);
    for (int i = 0; i < n; i++)
        if (!vis[i][m-1] && a[i][m-1] == '.') dfs(i,m-1);
    for (int i = 0; i < m; i++)
        if (!vis[n-1][i] && a[n-1][i] == '.') dfs(n-1,i);
    
    /*cout << "\n";
    //cout << n << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << "\n";
    }*/

    int numsLake = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            if (!vis[i][j] && a[i][j] == '.') {
                tmp3 = 1;
                dfs(i,j);
                pq.push({tmp3,i,j});
                numsLake++;
            }

    int ans = 0;
    memset(vis,false,sizeof vis);
    for (int i = 0; i < numsLake-k; i++) {
        elements tmp2 = pq.top(); pq.pop();
        dfs2(tmp2.x,tmp2.y);
        ans += tmp2.val;
    }
    
    //cout << "\n";
    cout << ans << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << b[i][j];
        cout << "\n";
    }
    //cout << numsLake;
    return 0;
}
