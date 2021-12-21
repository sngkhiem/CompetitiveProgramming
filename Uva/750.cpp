#include <bits/stdc++.h>

using namespace std;

int row[8],cntSol,a,b;

bool canPlace(int r, int c) {
    for (int prev = 0; prev < c; prev++)
        if (row[prev] == r || abs(row[prev]-r) == abs(prev-c)) return false;
    return true;
}

void backtrack(int c) {
    if (c == 8 && row[b] == a) {
        if (cntSol+1 < 10)
            cout << " " << ++cntSol << "      ";
        else cout << ++cntSol << "      ";
        for (int j = 0; j < 7; j++) cout << row[j]+1 << " ";
        cout << row[7]+1 << "\n";
        return;
    }
    for (int r = 0; r < 8; r++) {
        if (c == b && r != a) continue;
        if (canPlace(r,c)) {
            row[c] = r;
            backtrack(c+1);
        }
    }
}

signed main() {
    freopen("inp.txt","r",stdin); freopen("out.txt","w",stdout);
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        memset(row,0,sizeof row);
        cntSol = 0;
        cin >> a >> b; a--; b--;
        cout << "SOLN       COLUMN\n";
        cout << " #      1 2 3 4 5 6 7 8\n\n";
        backtrack(0);
        if (t) cout << "\n";
    }
    return 0;
}
