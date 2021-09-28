#include <bits/stdc++.h>

using namespace std;

int f[2005][2005];

signed main() {
    string a,b; cin >> a >> b;
    string c,d;
    for (int i = 0; i < a.size(); i++) c[i+1] = a[i];
    for (int i = 0; i < b.size(); i++) d[i+1] = b[i];

    for (int i = 1; i <= a.size(); i++)
        for (int j = 1; j <= b.size(); j++)
            if (c[i] == d[j]) f[i][j] = f[i-1][j-1]+1;
            else f[i][j] = max(f[i-1][j],f[i][j-1]);
    cout << f[a.size()][b.size()];
    return 0;
}
