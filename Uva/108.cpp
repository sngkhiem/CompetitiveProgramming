#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

int a[105][105],memo[105][105];

signed main() {
    //freopen("inp.txt","r",stdin); freopen("out.txt","w",stdout);
    int n;
    while(cin >> n) {
        bool flag = true;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                cin >> a[i][j]; memo[i][j] = a[i][j];
                if (a[i][j] > 0) flag = false;
                if (j > 0) a[i][j] += a[i][j-1];
            }

        int maxSubRect = -inf;
        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                int subRect = 0;
                for (int row = 0; row < n; row++) {
                    if (l > 0) subRect += a[row][r] - a[row][l-1];
                    else subRect += a[row][r];

                    if (subRect < 0) subRect = 0;
                    maxSubRect = max(maxSubRect,subRect);
                }
            }
        }

        if (flag) {
            maxSubRect = a[0][0];
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    maxSubRect = max(maxSubRect,memo[i][j]);
        }

        cout << maxSubRect << "\n";
    }
    //cout << maxSubRect;
    return 0;
}
