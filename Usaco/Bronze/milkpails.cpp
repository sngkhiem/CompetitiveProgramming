#include <bits/stdc++.h>

using namespace std;

#define int long long

int f[1005][1005];

signed main() {
    freopen("pails.in","r",stdin); freopen("pails.out","w",stdout);
    int a[2],m;
    cin >> a[1] >> a[2] >> m;

    for (int i = 1; i <= 2; i++)
        for (int j = 0; j <= m; j++)
            if (j >= a[i]) f[i][j] = max(f[i-1][j],f[i][j-a[i]]+a[i]);
            else f[i][j] = f[i-1][j];
    cout << f[2][m];
}
