#include <bits/stdc++.h>

using namespace std;

int a[25][25], b[25][25], invertB[25][25], ans[25][25];

signed main() {
    int h,w,n,m; cin >> h >> w >> n >> m;
    //Read image
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
            cin >> a[i][j];
    //Read kernel
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> b[i][j];
    //Invert columns and rows of kernel
    int curX = 1, curY = 1;
    for (int i = n; i >= 1; i--) {
        curY = 1;
        for (int j = m; j >= 1; j--) 
            invertB[curX][curY++] = b[i][j];
        curX++;
    }

    cout << "\n";
    for (int i = 1; i <= h-n+1; i++) {
        for (int j = 1; j <= w-m+1; j++) {
            int curX = 1, curY = 1;
            for (int p = i; p <= n+i-1; p++) {
                curY = 1;
                for (int q = j; q <= m+j-1; q++) {
                    ans[i][j] += a[p][q]*invertB[curX][curY++];
                }
                curX++;
            }
        }
    }
    
    for (int i = 1; i <= h-n+1; i++) {
        for (int j = 1; j <= w-m+1; j++) 
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
