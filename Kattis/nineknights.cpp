#include <bits/stdc++.h>

using namespace std;

signed main() {
    char grid[5][5];
    string ans = "valid";
    int knights = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'k') knights++;
        }
    if (knights != 9) {
        cout << "invalid"; return 0;
    }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (grid[i][j] == 'k') {
                if (i-2 >= 0&& j-1 >= 0 && grid[i-2][j-1] == '.') continue;
                else if (i-2 >= 0&& j-1 >= 0 && grid[i-2][j-1] == 'k') ans = "invalid";

                if (i-2 >= 0 && j+1 < 5 && grid[i-2][j+1] == '.') continue;
                else if (i-2 >= 0 && j+1 < 5 && grid[i-2][j+1] == 'k') ans = "invalid";

                if (i+2 < 5 && j-1 >= 0 && grid[i+2][j-1] == '.') continue;
                else if (i+2 < 5 && j-1 >= 0 && grid[i+2][j-1] == 'k') ans = "invalid";

                if (i+2 < 5 && j+1 < 5 && grid[i+2][j+1] == '.') continue;
                else if (i+2 < 5 && j+1 < 5 && grid[i+2][j+1] == 'k') ans = "invalid";

                if (j-2 >= 0 && i+1 < 5 && grid[i+1][j-2] == '.') continue;
                else if (j-2 >= 0 && i+1 < 5 && grid[i+1][j-2] == 'k') ans = "invalid";

                if (j-2 >= 0 && i-1 >= 0 && grid[i-1][j-2] == '.') continue;
                else if (j-2 >= 0 && i-1 >= 0 && grid[i-1][j-2] == 'k') ans = "invalid";

                if (j+2 < 5 && i-1 >= 0 && grid[i-1][j+2] == '.') continue;
                else if (j+2 < 5 && i-1 >= 0 && grid[i-1][j+2] == 'k') ans = "invalid";

                if (j+2 < 5 && i+1 < 5 && grid[i+1][j+2] == '.') continue;
                else if (j+2 < 5 && i+1 < 5 && grid[i+1][j+2] == 'k') ans = "invalid";
            }
    cout << ans;
    return 0;
}
