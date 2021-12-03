#include <bits/stdc++.h>

using namespace std;

int startGrid[10000005];

signed main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    while (cin >> n) {
        if (n == 0) break;
        memset(startGrid,0,sizeof startGrid);
        int c,p;
        bool ans = true;
        for (int i = 1; i <= n; i++) {
            cin >> c >> p;
            if (!ans) continue;
            if (p > 0 && startGrid[i + p] == 0 && i+p <= n) startGrid[i + p] = c;
            else if (p > 0) ans = false;

            if (p < 0 && i - abs(p) > 0) {
                if (startGrid[i - abs(p)] == 0)
                    startGrid[i - abs(p)] = c;
                else ans = false;
            }    else if (p < 0) ans = false;

            if (p == 0 && startGrid[i] == 0) startGrid[i] = c;
            else if (p == 0) ans = false;
        }
        if (!ans) cout << "-1\n";
        else {
            for (int i = 1; i < n; i++) cout << startGrid[i] << " ";
            cout << startGrid[n];
            cout << "\n";
        }
    }

    return 0;
}
