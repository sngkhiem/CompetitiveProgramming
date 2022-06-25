#include <bits/stdc++.h>

using namespace std;

char g[6][6];
int cnt;

signed main() {
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'k') cnt++;
        }

    string ans = "valid";
    if (cnt < 9 || cnt > 9) ans = "invalid";
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            if (g[i][j] == 'k') {
                if (i+1 <= 5 && j-2 >= 1 && g[i+1][j-2] == 'k') ans = "invalid";
                if (i+1 <= 5 && j+2 <= 5 && g[i+1][j+2] == 'k') ans = "invalid";
                if (i-1 >= 1 && j+2 <= 5 && g[i-1][j+2] == 'k') ans = "invalid";
                if (i-1 >= 1 && j-2 >= 1 && g[i-1][j-2] == 'k') ans = "invalid";
                if (i-2 >= 1 && j-1 >= 1 && g[i-2][j-1] == 'k') ans = "invalid";
                if (i-2 >= 1 && j+1 <= 5 && g[i-2][j+1] == 'k') ans = "invalid";
                if (i+2 <= 5 && j-1 >= 1 && g[i+2][j-1] == 'k') ans = "invalid";
                if (i+2 <= 5 && j+1 <= 5 && g[i+2][j+1] == 'k') ans = "invalid";
            }
    cout << ans;
    return 0;
}
