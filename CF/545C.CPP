#include <bits/stdc++.h>

using namespace std;

int n;
int f[100001][3], x[100001], h[100001];

// f[i][0] i th tree, don't cut tree i th
// f[i][1] i th tree, cut tree i th, falls left
// f[i][2] i th tree, cut tree i th, falls right

signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> h[i];

    x[0] = INT_MIN; x[n+1] = INT_MAX;
    for (int i = 1; i <= n; i++) {
        bool flag1 = false, flag2 = false;
        //f[i][0]
        if (x[i-1]+h[i-1] < x[i]) f[i][0] = max({f[i-1][0],f[i-1][1],f[i-1][2]});
        else f[i][0] = max(f[i-1][0],f[i-1][1]);

        //f[i][1]
        if (x[i]-h[i] > x[i-1]) {
            f[i][1] = max(f[i-1][0]+1,f[i-1][1]+1);
            if (x[i-1]+h[i-1] < x[i]-h[i])
                f[i][1] = max(f[i][1],f[i-1][2]+1);
        }

        //f[i][2]
        if (x[i+1] > x[i] + h[i]) f[i][2] = max({f[i-1][1],f[i-1][2],f[i-1][0]}) + 1;
    }
    cout << max({f[n][0],f[n][1],f[n][2]});
    return 0;
}
