#include <bits/stdc++.h>

using namespace std;

bool check(string cur) {
    if (cur[0] != '.' && cur[0] == cur[1] && cur[0] == cur[2]) return true;
    if (cur[0] != '.' && cur[0] == cur[3] && cur[0] == cur[6]) return true;
    if (cur[0] != '.' && cur[0] == cur[4] && cur[0] == cur[8]) return true;
    if (cur[3] != '.' && cur[3] == cur[4] && cur[3] == cur[5]) return true;
    if (cur[6] != '.' && cur[6] == cur[7] && cur[6] == cur[8]) return true;
    if (cur[1] != '.' && cur[1] == cur[4] && cur[1] == cur[7]) return true;
    if (cur[2] != '.' && cur[2] == cur[5] && cur[2] == cur[8]) return true;
    if (cur[6] != '.' && cur[6] == cur[4] && cur[6] == cur[2]) return true;
    return false;
}

signed main() {
    int t; cin  >> t;
    while (t--) {
        string ans = "no\n";
        string board;
        for (int i = 0; i < 3; i++) {
            string tmp; cin >> tmp;
            board += tmp;
        }
        queue<pair<string,int>> q;
        q.push({".........",1});
        while (!q.empty()) {
            string cur = q.front().first;
            int curPlayer = q.front().second;
            q.pop();
            if (cur == board) {
                ans = "yes\n"; break;
            }
            if (check(cur)) continue;
            for (int i = 0; i < 9; i++) {
                if (cur[i] == '.') {
                    cur [i] = (curPlayer ? 'X' : 'O');
                    if (cur[i] == board[i]) q.push({cur,1 ^ curPlayer});
                    cur[i] = '.';
                }
            }
        }
        cout << ans;
    }
    return 0;
}
