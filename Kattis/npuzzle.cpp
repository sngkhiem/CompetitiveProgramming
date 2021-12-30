#include <bits/stdc++.h>

using namespace std;

signed main() {
    char c;
    int ans = 0;
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++) {
            cin >> c;
            if (c == 'A') ans += abs(i-1) + abs(j-1);
            else if (c == 'B') ans += abs(i-1) + abs(j-2);
            else if (c == 'C') ans += abs(i-1) + abs(j-3);
            else if (c == 'D') ans += abs(i-1) + abs(j-4);
            else if (c == 'E') ans += abs(i-2) + abs(j-1);
            else if (c == 'F') ans += abs(i-2) + abs(j-2);
            else if (c == 'G') ans += abs(i-2) + abs(j-3);
            else if (c == 'H') ans += abs(i-2) + abs(j-4);
            else if (c == 'I') ans += abs(i-3) + abs(j-1);
            else if (c == 'J') ans += abs(i-3) + abs(j-2);
            else if (c == 'K') ans += abs(i-3) + abs(j-3);
            else if (c == 'L') ans += abs(i-3) + abs(j-4);
            else if (c == 'M') ans += abs(i-4) + abs(j-1);
            else if (c == 'N') ans += abs(i-4) + abs(j-2);
            else if (c == 'O') ans += abs(i-4) + abs(j-3);
        }
    cout << ans;
    return 0;
}
