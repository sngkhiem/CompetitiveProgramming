#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,k; cin >> n >> k;
    vector<int> commands;
    for (int i = 0; i < k; i++) {
        string s; cin >> s;
        if (s == "undo") {
            int undo; cin >> undo;
            for (int i = 0; i < undo; i++) commands.pop_back();
        } else {
            int tmp = stoi(s);
            commands.push_back(tmp);
        }
    }

    int curPos = 0;
    for (auto i: commands) {
        curPos += i;
        curPos %= n;
        while (curPos < 0) curPos += n;
    }
    cout << curPos;
    return 0;
}
