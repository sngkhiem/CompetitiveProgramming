#include <bits/stdc++.h>

using namespace std;

char grid[8][8];
vector<pair<int,int>> queens;
bool diag1[105],diag2[105],col[105],row[105];


signed main() {
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '*')
                queens.push_back({i,j});
        }
    if (queens.size() != 8) {
        cout << "invalid"; return 0;
    }

    for (int i = 0; i < queens.size(); i++) {
        int x = queens[i].first; int y = queens[i].second;
        if (row[x] || col[y] || diag1[x+y] || diag2[x-y+7]) {
            cout << "invalid"; return 0;
        }
        row[x] = col[y] = diag1[x+y] = diag2[x-y+7] = true;
    }
    cout << "valid";
    return 0;
}
