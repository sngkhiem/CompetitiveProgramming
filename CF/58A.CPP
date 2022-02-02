#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;
    int cur = 0;
    for (int i = 0; i < s.size(); i++) {
        if (cur == 0 && s[i] == 'h') cur++;
        else if (cur == 1 && s[i] == 'e') cur++;
        else if (cur == 2 && s[i] == 'l') cur++;
        else if (cur == 3 && s[i] == 'l') cur++;
        else if (cur == 4 && s[i] == 'o') cur++;
    }
    if (cur == 5) cout << "YES";
    else cout << "NO";
    return 0;
}
