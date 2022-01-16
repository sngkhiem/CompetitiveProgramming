#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n,m,r,c; cin >> n >> m >> r >> c;
        r--; c--;
        bool checkImpo = false, checkRow = false, checkCol = false, checkRowCol = false;
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++) {
                char tmp; cin >> tmp;
                if (tmp == 'B') checkImpo = true;
                if (tmp == 'B' && i == r && j == c) checkRowCol = true;
                else if (tmp == 'B' && i == r) checkRow = true;
                else if (tmp == 'B' && j == c) checkCol = true;
            }
        if (!checkImpo) cout << "-1\n";
        else if (checkRowCol) cout << "0\n";
        else if (!checkRow && !checkCol) cout << "2\n";
        else cout << "1\n";
    }
        
    return 0;
}
