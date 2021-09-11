#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("cownomics.in","r",stdin); freopen("cownomics.out","w",stdout);
    int n,m; cin >> n >> m;
    string s[2*n+5];
    for (int i = 1; i <= 2*n; i++) cin >> s[i];

    int ans = 0;
    for (int i = 0; i < m; i++) {
        int a = 0, c = 0, g = 0, t = 0;
        int a2 = 0, c2 = 0, g2 = 0, t2 = 0;
        for (int j = 1; j <= n; j++)
            if (s[j][i] == 'A') a++;
            else if (s[j][i] == 'C') c++;
            else if (s[j][i] == 'G') g++;
            else if (s[j][i] == 'T') t++;

        for (int j = n+1; j <= 2*n; j++)
            if (s[j][i] == 'A') a2++;
            else if (s[j][i] == 'C') c2++;
            else if (s[j][i] == 'G') g2++;
            else if (s[j][i] == 'T') t2++;

        if (a > 0 && a2 > 0) continue;
        else if (c > 0 && c2 > 0) continue;
        else if (g > 0 && g2 > 0) continue;
        else if (t > 0 && t2 > 0) continue;
        else ans++;
    }
    cout << ans;
    return 0;
}
