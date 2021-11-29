#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;
    char memo[3];
    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && i + 2 < s.size()) {
            memo[0] = s[i];
            memo[1] = s[i+1];
            memo[2] = s[i+2];
            sort(memo,memo+3);
            if (memo[0] == 'B' && memo[1] == 'L' && memo[2] == 'R') {
                cout << "C"; i += 2;
            } else {
                if (s[i] == 'R') cout << "S";
                else if (s[i] == 'L') cout << "H";
                else cout << "K";
            }
        } else {
            if (s[i] == 'R') cout << "S";
            else if (s[i] == 'L') cout << "H";
            else cout << "K";
        }
    }
    return 0;
}
